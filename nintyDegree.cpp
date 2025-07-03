#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col1 = 1;
        while (col1 <= row)
        {
            cout << "*";
            col1 += 1;
        }
        /*
        *
        **
        ***
        ****
        */
        cout << endl;
        row += 1;
    }
}
/*
   *
  **
 ***
****
 */