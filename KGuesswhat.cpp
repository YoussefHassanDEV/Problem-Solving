#include<iostream>
using namespace std;
int main()
{
    long long int n{0},k{0},a{0},b{0};
    long double m{0};
    cin>>n>>k>>a;
    b=(n*k)/a;
    m=(double(n)*double(k))/double(a);
    if(b!=m)
    {
        cout<<"double";
    }
    else if(b>=-2147483648&&b<=2147483647)
    {
        cout<<"int";
    }
    else
    {
        cout<<"long long";
    }
}