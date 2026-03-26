#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }

    }
    return false;
}

int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,-20} ; 
     bool ans = LinearSearch(arr, 10,8);
        if(ans){
            cout<<"Element found in the array"<<endl;
        }
        else{
            cout<<"Element not found in the array"<<endl;
        }
     
}