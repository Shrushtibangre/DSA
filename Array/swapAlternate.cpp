#include<iostream>
using namespace std;

void swap(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}
 void printArray(int arr[], int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
 }

int main(){

    int arr[10]={2,4,6,8,10,12,14,16,18,20} ;
    swap(arr,10);
    printArray(arr,10);

    int shrushti[5]={7,17,9,3,2000};
    swap(shrushti,5);
    printArray(shrushti,5);
}