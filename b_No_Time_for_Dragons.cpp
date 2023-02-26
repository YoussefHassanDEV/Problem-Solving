#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[i] = {b - a, {b, a}};
    }
    sort(v.begin(), v.end());
    ll last = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (last < v[i].second.second)
        {
            sum += (v[i].second.second - last);
            last = v[i].second.second;
        }
        last -= v[i].second.first;
    }
    cout << sum;
}