#include <bits/stdc++.h>
#define int long long
using namespace std;
string s, p;
int a, b, c;
signed main()
{
    cin >> a;
    cin >> s;
    p = s;
    cin >> a >> b >> c;
    --a, --b;
    for (int i = a, j = b, k = 0; k < c; ++i, ++j, ++k)
        s[j] = p[i];
    for (int i = a, j = b, k = 0; k < c; ++i, ++j, ++k)
        p[j] = p[i];
    cout << p << '\n';
    cout << s << '\n';
}