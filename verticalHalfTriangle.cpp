#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
         /*
        while (col <= n - row + 1)
        {
            cout << "*";
            col += 1;
        }
       
        ****
        ***
        **
        *
        */
       int space = n -col+row;
       while (space)
       {
           cout << " ";
           space = space - 1;
       }
        while(col<=n-row+1)
       {
        cout << "*";
        col += 1;
    }
    /*
    cout << "*";
    ****
     ***
      **
       *
    */
        cout << endl;
        row += 1;
    }
}
