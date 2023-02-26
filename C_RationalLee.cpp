#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include<deque>
using namespace std;
#define ll long long int
int main()
{
    ll t, n, m;
    cin >> t;
    while (t--)
    {
        ll ptr = 0, z = 0, cnt = 0;
        cin >> n >> m;
        deque<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(),b.end());
        while (!b.empty() && b.back() == 1)
        {
            cnt += 2 * a.back();
            a.pop_back();
            b.pop_back();
        }
        for (int i = 0; i < b.size(); i++)
        {
            cnt += a.back();
            a.pop_back();
            cnt += a.front();
            a.pop_front();
            for (int j = 0; j < b[i] - 2; j++)
                a.pop_front();
        }
        cout << cnt << "\n";
    }
}