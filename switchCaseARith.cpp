#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a=12,b=2,c;
    int num=1,num2=4;
    switch (n)
    {
    case 1:
    {
        int a = 2, b = 5, c;
        c = a + b;
        cout << c;
        break;
    }
      
    case 2: cout<<num+num2<<endl;
    break;

    case 3:
       { int a1 = 2, b1 = 5, c1;
        c1 = a1 * b1;
        cout << c1;
        break;}
    case 4:{
        int a3 = 10, b3 = 5, c3;
        c3 = a3 / b3;
        cout << c3;
        break;}
    case 5:
       { int a4 = 20, b4 = 2, c4;
        c4 = a4 % b4;
        cout << c4;
        break;
       }
    default:
        cout << "No One is here";
    }
}