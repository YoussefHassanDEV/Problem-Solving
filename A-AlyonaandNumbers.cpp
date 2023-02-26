#include<iostream>
#include<algorithm>
#include<cmath>
#include <iomanip> 
using namespace std;
int main()
{
    long double a{0}, b{0};
    cin>>a>>b;
    a=(a*b)/5;
    unsigned long long int c =round(a);
    cout<<c;
}