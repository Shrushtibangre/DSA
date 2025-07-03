#include <iostream>
#include <queue>
using namespace std;

struct Process {
    int id;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnaroundTime;
};

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;

    Process processes[n];

    // Input burst times
    for (int i = 0; i < n; i++) {
        cout << "Enter Burst Time for Process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
        processes[i].id = i + 1;
        processes[i].remainingTime = processes[i].burstTime;
        processes[i].waitingTime = 0;
        processes[i].turnaroundTime = 0;
    }

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    int time = 0;
    bool done;

    do {
        done = true;
        for (int i = 0; i < n; i++) {
            if (processes[i].remainingTime > 0) {
                done = false;

                if (processes[i].remainingTime > quantum) {
                    time += quantum;
                    processes[i].remainingTime -= quantum;
                } else {
                    time += processes[i].remainingTime;
                    processes[i].waitingTime = time - processes[i].burstTime;
                    processes[i].remainingTime = 0;
                    processes[i].turnaroundTime = time;
                }
            }
        }
    } while (!done);

    // Output results
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    float totalWaitingTime = 0, totalTurnaroundTime = 0;
    for (int i = 0; i < n; i++) {
        cout << "P" << processes[i].id << "\t" << processes[i].burstTime << "\t\t"
             << processes[i].waitingTime << "\t\t" << processes[i].turnaroundTime << endl;
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }

    cout << "\nAverage Waiting Time: " << totalWaitingTime / n;
    cout << "\nAverage Turnaround Time: " << totalTurnaroundTime / n << endl;

    return 0;
}
