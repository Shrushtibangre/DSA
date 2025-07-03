#include<iostream>
using namespace std;
int main()
{
    char ch;
   cin>>ch;
    if(ch >= 'a' && ch <= 'z' )
    {
        cout<<ch <<" " <<"this is lowerCAse"<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout<<ch << " " <<"This is Uppar CASe"<<endl;
    }
    else{
        cout<<ch<< " " <<"This is Numeric";
    }
}