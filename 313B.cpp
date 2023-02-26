
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, l, r, cnt = 0;
    string s;
    cin >> s >> m;
    int dp[s.size()];
    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
            cnt++;

        dp[i] = cnt;
    }

    while (m--)
    {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << "\n";
    }
}