#include<iostream>
#include<cmath>
using namespace std; 
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    ll a,b,c,d,e;
    while(t--)
    {
        cin>>a>>b>>c;
        d=abs(a-b);
        e=a+b;
        if(c==d||c==e)
        puts("YES");
        else
        puts("NO");
    }
}