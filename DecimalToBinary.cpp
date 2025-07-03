// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         // int digit =n %10;//Wrong
//         int bit = n & 1;

//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << "Answer is " << ans << endl;
// }
#include <iostream>
#include<bitset>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // int ans = 0;
    // int place = 1; // Used to place binary digits correctly

    // while (n != 0) {
    //     int bit = n & 1;
    //     ans += bit * place; // Adjusting position using multiplication
    //     n = n >> 1;
    //     place *= 10; // Moving to the next decimal place
    // }
    
    // cout << "Answer is " << ans << endl;
    // return 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Binary representation (Two’s Complement - 8 bit): " 
         << bitset<8>(num) << endl; // Shows 8-bit binary representation
    
    cout << "Binary representation (Two’s Complement - 16 bit): " 
         << bitset<16>(num) << endl; // Shows 16-bit binary representation
    
    return 0;
}
