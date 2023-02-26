#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    if(a==0&&c==0)
    {
        cout<<0;
    }
    if((a+b+c)%2==0)
    {
        cout<<a+b+c;
    }
    else
    {
        cout<<(a+b+c)-1;
    }
}