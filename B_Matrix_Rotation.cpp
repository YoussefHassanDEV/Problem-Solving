#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    ll x[4];
    while (t--)
    {
        for (int i = 0; i < 4; i++)
            cin >> x[i];
        int mx = 0, mn = 101, mxid, mnid;
        for (int i = 0; i < 4; i++)
        {
            if (mx < x[i])
            {
                mx = x[i];
                mxid = i;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (mn> x[i])
            {
                mn = x[i];
                mnid = i;
            }
        }
        if(mnid+mxid==3)
        puts("YES");
        else
        puts("NO");
    }
}