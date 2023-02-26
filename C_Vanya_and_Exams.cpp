#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, r, avg, av(0), es(0), x(0);
    cin >> n >> r >> avg;
    vector<pair<ll, ll>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second >> p[i].first;
        av += p[i].second;
    }
    avg = avg * n;
    sort(p.begin(), p.end());
    ll temp;
    while (avg > av && x != n)
    {
        temp=min(r-p[x].second,avg-av);
        av+=temp;
        es += temp*p[x].first;
        x++;
    }
    cout << es;
}