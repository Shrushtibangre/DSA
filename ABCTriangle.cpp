#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    // char ch='A';
    while (row <= n)
    {
        int col = 1;

        // char ch=('A'+col-1);
        // char ch=('A'+row-1);
        //    char ch=('A'+row-1);
       char ch = ('A'+row-col);
        while (col <= row)
        {
            cout << ch<< " ";
             ch=ch-1;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}
/*
char ch = ('A'+row-col);
  ch=ch-1;
A
B A 
C B A
D C B A
*/
/*
 char ch = ('A'+n-row+col-1 );
 OR
 char ch = ('A'+n-row );
 ch=ch+1;
D 
C D
B C D
A B C D
*/

/*
char ch=('A'+col-1);
A
A B
A B C
A B C D
*/

/*
char ch=('A'+row+col-2);
OR
char ch=('A'+row-1);
A
B C
C D E
D E F G
*/

/*
char ch=('A'+row-1);
without Ch+=1;
A
B B
C C C
D D D D

*/
/*
char ch='A'
before starting while loop for a row
A
B C
D E F
G H I J
*/