#include<iostream>
using namespace std;
 int main()
 {
    int n, i=1;
    cin>>n;

    while(i<=n)
    {
        int j=2;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
 }
 /*
 111
 222
 333*/