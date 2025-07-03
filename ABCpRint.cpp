#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
   // char ch='A';
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch=('A'+row+col-2) ;
           // char ch='A'+row-1;
           // char ch='A'+col-1;
            cout << ch<<" ";
            ch+=1;
            col+=1;
         
        }
        cout<<endl;
        row+=1;
    }
}
/*
char ch='A'+row-1;
A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E

*/
/*
char ch='A'+col-1;
A B C D 
A B C D
A B C D
A B C D
*/


/*
 char ch='A';

A B C D E 
F G H I J
K L M N O
P Q R S T
U V W X Y
*/

/*
char ch=('A'+row+col-2) ;
A B C D 
B C D E
C D E F
D E F G
*/