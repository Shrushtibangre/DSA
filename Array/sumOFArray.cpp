#include<iostream>
using namespace std;

int addArray(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    return sum;
}

int main(){
    int arr[5]={2,3,5,6,8};
    int result = addArray(arr,5);
    cout<<"Sum of array elements: "<<result<<endl;
    // int sum=0;
    // for(int i=0;i<5;i++){
    //     sum+=arr[i];
    //     cout<<"Sum of array elements: "<<sum<<endl;
    // }
    // return 0;
}