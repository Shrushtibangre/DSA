#include<iostream>
using namespace std;
int power()
{
    int num, num1;
    cin>>num>>num1;
    int answer=1;
    for(int i=1;i<=num1;i++)
    {
        answer=answer*num;
    }
return answer;

}
int main()
{
    int a,b;
    int ans= power();
    cout<<"power of num is "<<ans;
}