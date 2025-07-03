#include<iostream>
using namespace std;

int main()
{
    int num=10;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for( int i=1;i<=num;i++)
    {
        int nextnum=a+b;
        cout<<nextnum<<' ';
        a=b;
        b=nextnum;
    }

}