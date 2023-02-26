#include <bits/stdc++.h>
using namespace std;
#define int long long int
void GETAC()
{
    int n, a(1), b(0), c(2), i(0);
    cin >> n;
    --n;
    bool f(1);
    while (n > 0)
    {
        int mn(min(c, n));
        if (f)
            b += mn;
        else
            a += mn;
        n -= mn;
        if (i & 1)
            f = !f;
        ++c, ++i;
    }
    cout << a << ' ' << b << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        GETAC();
}