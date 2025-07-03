#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*
12345
12345
12345
12345
12345*/