#include<iostream>
using namespace std;

void home(int des,int src){
 cout<<"mai aise chal rha tha : "<<src<<endl;
    if(des==src){  //base case /base condition
        cout<<"Pohcha mai";
        return  ;
    }
    src++; //processing
    home(des,src); // recusive realtion
}

int main()
{
    int des=10;
    int src =1;

    cout<<endl;

    home(des,src);
 return 0;
}
