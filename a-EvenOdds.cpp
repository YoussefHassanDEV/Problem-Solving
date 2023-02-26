#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x=0,y=0;
    double odd=0,even=0;
    cin>>x>>y;
    even=floor(x/2);
    odd=ceil(x/2);
    if(x%2==0)
    {
        y=y-even;
        x=x-even;
    }

}