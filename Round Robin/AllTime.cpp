#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int waitingTime = 0;
    int turnaroundTime = 0;
    int responseTime = -1;
    bool finished = false;
};

bool compareArrival(Process a, Process b) {
    return a.arrivalTime < b.arrivalTime;
}

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter Arrival Time and Burst Time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), compareArrival);

    queue<int> readyQueue;
    int currentTime = 0;
    int completed = 0;
    vector<bool> inQueue(n, false);

    // Add first process to queue
    readyQueue.push(0);
    inQueue[0] = true;
    currentTime = processes[0].arrivalTime;

    while (completed < n) {
        if (readyQueue.empty()) {
            // Jump to next arriving process if CPU is idle
            for (int i = 0; i < n; i++) {
                if (!processes[i].finished && !inQueue[i]) {
                    readyQueue.push(i);
                    inQueue[i] = true;
                    currentTime = processes[i].arrivalTime;
                    break;
                }
            }
        }

        int idx = readyQueue.front();
        readyQueue.pop();

        // Record first response time
        if (processes[idx].responseTime == -1) {
            processes[idx].responseTime = currentTime - processes[idx].arrivalTime;
        }

        int execTime = min(quantum, processes[idx].remainingTime);
        processes[idx].remainingTime -= execTime;
        currentTime += execTime;

        // Check for new arrivals during execution
        for (int i = 0; i < n; i++) {
            if (!inQueue[i] && !processes[i].finished && processes[i].arrivalTime <= currentTime) {
                readyQueue.push(i);
                inQueue[i] = true;
            }
        }

        if (processes[idx].remainingTime == 0) {
            processes[idx].finished = true;
            completed++;
            processes[idx].turnaroundTime = currentTime - processes[idx].arrivalTime;
            processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
        } else {
            readyQueue.push(idx); // put back for next round
        }
    }

    // Output
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\tRT\n";
    float totalWT = 0, totalTAT = 0, totalRT = 0;
    for (auto &p : processes) {
        int completionTime = p.arrivalTime + p.turnaroundTime;
        cout << "P" << p.id << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t" << completionTime
             << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\t" << p.responseTime << "\n";
        totalWT += p.waitingTime;
        totalTAT += p.turnaroundTime;
        totalRT += p.responseTime;
    }

    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n;
    cout << "\nAverage Response Time: " << totalRT / n << "\n";

    return 0;
}
 