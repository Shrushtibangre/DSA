#include<iostream>
using namespace std;

int main()
{
    int n ,i=2;

     cout<<"Enter the value of N : ";
    cin>>n;

    while(i<n)
    {
        if(n%i == 0)
        {
          std::  cout<<"THis is not prime Number"<<endl;
        }
        else//(n%i != 0)
        {
            std::cout<<"This is prime number";
        }
        i=i+1;
    }

}