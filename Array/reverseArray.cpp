#include<iostream>

using namespace std;

int reverse(int arr[], int n){
   int s=0;
   int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void printArray(int arr[], int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={5,10,15,20,25};
    int brr[10]={2,4,6,8,10,12,14,16,18,-20} ;
    cout<<"Reversed array is: "<<endl;
    reverse(arr,5);
    printArray(arr,5);
    reverse(brr,10);
    printArray(brr,10);

}