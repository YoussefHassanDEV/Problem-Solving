#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    long double n=0,m=0,l=0,a;
    cin>>n>>m>>l;
    cout<<fixed;
    cout<<setprecision(0)<<ceil(n/l)*ceil(m/l);
}