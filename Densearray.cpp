#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int n, cnt = 0, mx, mn;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (min(a[i], a[i + 1]) * 2 < max(a[i], a[i + 1]))
        {
            mx = max(a[i], a[i + 1]);
            mn = min(a[i], a[i + 1]);
            while (mn*2 < mx)
            {
                cnt += 1;
                mn *= 2;
            }
        }
    }
    cout << cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        puts("");
    }
}