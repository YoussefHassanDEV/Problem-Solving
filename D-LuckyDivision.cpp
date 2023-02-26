#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a{0},b{10},f{0},c{0};
    cin>>a;
    b=log10(a)+1;
    if(a%4==0||a%7==0)
    {
        cout<<"YES";
        return 0;
    }
    for(int i=1;i<=b;i++)
    {
        if(a%10==4||a%10==7)
        {
            c++;
        }
        a/=10;
    }
    if (c==b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}