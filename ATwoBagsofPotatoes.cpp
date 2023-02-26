#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main()
{
    ll y, k, n,x1,x2;
    cin >> y >> k >> n;
    x1=k-y%k;
    x2=n-y;
    if(x1<=x2)
    {
        cout<<x1;
        x1+=k;
        while(x1<=x2)
        {
            cout<<x1<<' ';
            x1+=k;
        }
    }
    else
    puts("-1");
}