#include<iostream>
#include<algorithm>
using namespace std;


void  printArray(int arr[], int n){
    cout<<"Array Elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<"Done"<<endl;
}

int main(){

    int arr[10]={2,4,6,8,10,12,14,16,18,-20} ; 
    // printArray(arr,10);

    // int first[5]={0};
    // printArray(first,5);
    
//    cout<<"Printing array Elements:"<<endl;
//    //Sort the array
//    sort(arr,arr+8);
//     for(int i=0;i<8;i++){
//          cout<<arr[i]<<" ";
//     }



// // reverse the array
// reverse(arr,arr+8);
// for(int i=0;i<8;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;

// // Find the maximum and minimum element in the array
int max=arr[0];
int min=arr[0]; 
for(int i=1;i<10;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }

}
cout<<"Maximum element: "<<max<<endl;
cout<<"Minimum element: "<<min<<endl;


// // remove the duplicate elements from the array
// int n=sizeof(arr)/sizeof(arr[0]);
// sort(arr,arr+n);
// int uniqueCount = unique(arr, arr+n) - arr;
// for(int i=1;i<uniqueCount;i++){
//     cout<<arr[i]<<" ";
// }






}