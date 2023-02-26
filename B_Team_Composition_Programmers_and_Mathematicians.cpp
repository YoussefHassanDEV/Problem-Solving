#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll t = 0;
    cin >> t;
    ll m = 0, p = 0;
    while (t--)
    {
        cin >> m >> p;
        if(m+p<=6)
        {
            if(m+p>=4)
            cout<<(m+p)/4<<"\n";
            else
            cout<<0<<"\n";
            continue;
        }
        if (m == p)

            cout << m / 4 + p / 4<<"\n";

        else
        {
            cout <<(max(m,p)/4),min(m,p);
            cout<<"\n";
        }
    }
}