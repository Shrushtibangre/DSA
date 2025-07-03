#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    // int count = 1;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        //int value=row;
        while (col <= row)
        {
            cout<<(row-col+1)<<" ";
            // cout << (row + col - 1)<<" ";
            // cout<<value;
            // value+=1;
            // cout << count;
            // count += 1;
            // cout<<row;
            // cout<<col;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}
/*
 cout<<(row-col+1)<<" ";
1 
2 1
3 2 1
4 3 2 1
*/
/*
 cout << (row + col - 1);
 OR
 cout<<value;
 value+=1;
1
23
345
4567
56789
*/
/*
cout<<count;
count+=1;
1
23
456
78910
*/
/*
cout<<row;
1
22
333
4444
55555
*/
/*
cout<<col;
1
12
123
1234
12345*/