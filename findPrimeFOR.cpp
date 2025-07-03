#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    bool isPrime = 1;

    for (int i = 2; i <num; i++)
    {
        if (num % i == 0)
        {
            // cout<<"Not a prime number"<<endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "NOt a Prime Number" << endl;
    }
    else
    {
        cout << "Is a prime number";
    }
}