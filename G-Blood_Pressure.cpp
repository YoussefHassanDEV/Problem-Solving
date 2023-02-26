#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a=0,b=0,c=0;
    cin>>a>>b;
    c=abs(a-b);
    c=c/3;
    c=c+b;
    cout<<c;
}