#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
using namespace std;
#define ll int
int main()
{
    ll n, a;
    cin >> a >> n;
    pair<int, int> p[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second >> p[i].first;
    }
    sort(p, p + n);
    ll x = n - 1, cnt = 0;
    while (a != 0)
    {

        for (p[x].second; p[x].second > 0; p[x].second--)
        {
            a -= 1;
            cnt += p[x].first;
            if (a == 0)
                break;
        }
        if (x == 0)
            break;
        x -= 1;
    }
    cout << cnt;
}