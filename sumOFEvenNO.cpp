#include<iostream>
using namespace std;
int main()
{
    int n,i=2,sum=0;
    cout<<"Enter the value ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<n<< "sum of even value is "<<sum;
}