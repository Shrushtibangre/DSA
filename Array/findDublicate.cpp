#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicate elements: ";

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}
void printArray(int arr[], int n) {
    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 5, 3, 5, 4, 1};
    int n = 6;
    printArray(arr, n);
    findDuplicates(arr, n);

    return 0;
}

/*int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = 6;

    cout << "Duplicate elements: ";

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // avoid printing same duplicate again
            }
        }
    }

    return 0;
}*/