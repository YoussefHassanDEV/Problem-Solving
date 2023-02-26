#include <iostream>
#include <vector>
using namespace std;
#define ll int
int main()
{
    ll n, x, mx = 0;
    cin >> n;
    vector<ll> v(n), m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i>0)
            if (v[i] <= v[i - 1])
            {
                m.push_back(v[i-1]);
            }
    }
    m.push_back(v.back());
    cout << m.size()<<"\n";
    for(int i=0;i<m.size();i++)
    cout<<m[i]<<' ';
}