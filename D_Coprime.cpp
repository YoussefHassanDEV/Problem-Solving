#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
#define ll long long int
int main()
{

    bool prime[1001];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= 1001; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= 1001; i += p)
                prime[i] = false;
        }
    }
    cout<<prime[1];
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        ll m=0;
        ll x[n];
        for(int i=0;i<n;i++)
        {
            cin>>m;
            if(prime[m])
            x[i]=m;
            else
            x[i]=0;
        }
        sort(x,x+n,greater<int>());
        cout<<x[0]+x[1]<<"\n";
    }
}