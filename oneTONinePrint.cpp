#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            // cout<<n+j-1;
            /*345
            345
            345*/
            cout << count <<" ";
            count = count + 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
/*
1 2 3 
4 5 6
7 8 9*/