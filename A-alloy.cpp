#include<iostream>
using namespace std;
int main()
{
    //sdasdasdasdadsada
    int a=0,b=0;
    cin>>a>>b;
  
    if(a!=0&&b==0)
    {
        cout<<"Gold";
    }
    else if(b!=0&&a==0)
    {
        cout<<"Silver";
    }
    else
    {
        cout<<"Alloy";
    }
}