// recursion 
/*
1. function call itself directly and indirectly 
2. big problem ka solution small problem me convert krke solve krna 


5! = 5 * 4!
n! = n * (n-1)!
f(n) = n* f(n-1)


3.  jaha pe rukna hai like 0! so this is called base case or condition


2^n 

2^4 = 2 * 2^3
2^n = 2 *2^n-1
f(n) = 2 * f(n-1) :- recusive relation

*/

/*
mandatory in recursion
 base case :- return mandatory :- if you dont write base case  then we giving segmention fault 
    unlimitated value print hoti rahegi jab tak stack overflow nhi ho jata tab tak
 recursive relation :- 
 */


#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)  //base case
    return 1;


    return n * factorial(n-1);
    
}


int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<< ans <<endl;
    return 0;
}