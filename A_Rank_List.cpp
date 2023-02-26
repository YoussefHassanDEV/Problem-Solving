#include <iostream>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
#define ll int
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first>b.first)
        return true;

    else if(a.first==b.first)
        return a.second<b.second;

    else
        return false;
}
int main()
{
    ll n, k, i(0), x, y;
    cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    map<pair<ll, ll>, int> m;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        p[i] = make_pair(x, y);
        m[p[i]] += 1;
    }
    sort(p.begin(), p.end(),cmp);
    cout << m[p[k-1]];
}