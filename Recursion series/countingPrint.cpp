#include <iostream>
using namespace std;

int counting(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // head recursion

    counting(n - 1);   //recursive relation
    cout << n << endl; //proccess


    // tai recursion
    cout << n << endl; //process
    counting(n - 1); //recursive relation
}

int main()
{
    int n;
    cin >> n;
    int ans = counting(n);
    cout << ans << endl;
    return 0;
}