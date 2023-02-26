#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, l, r, cnt = 0;
    string s;
    cin >> s >> m;
    int x[100000];
    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
            cnt++;

        x[i] = cnt;
    }

    while (m--)
    {
        cin >> l >> r;
        cout << x[r - 1] - x[l - 1] << "\n";
    }
}