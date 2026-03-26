#include <iostream>
using namespace std;


void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    cout << "Intersection elements: ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

void printArrays(int arr1[], int n1, int arr2[], int n2) {
    cout << "Array 1: ";
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for(int j = 0; j < n2; j++) {
        cout << arr2[j] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;

    
    printArrays(arr1, n1, arr2, n2);
    findIntersection(arr1, n1, arr2, n2);

    return 0;
}

// int main() {
//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {3, 4, 5, 6};

//     int n1 = 4, n2 = 4;

//     cout << "Intersection elements: ";

//     for(int i = 0; i < n1; i++) {
//         for(int j = 0; j < n2; j++) {
//             if(arr1[i] == arr2[j]) {
//                 cout << arr1[i] << " ";
//                 break;
//             }
//         }
//     }

//     return 0;
// }