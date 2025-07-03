#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
       int space = n - col + row;
        // int space = n - row;
        while (space)
        {
            cout << " ";
            space = space + 1;
        }
       while (col <= n - row + 1)
    //    while(col<=row)
        {
            cout << col;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}
/*
 while(col<=row)
   1
  22
 333
4444
*/
/*
 int space = n - col + row;
 while (col <= n - row + 1)
   cout << row;
    1111
     222
      33
       4
*/
/*
 while(col<=row)
   1
  12
 123
1234
*/