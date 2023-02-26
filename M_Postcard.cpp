#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i, j, k;
    string s, t;
    map<char, ll> np;
    cin >> s >> t;
    for (i = 0; i < t.length(); i++)
        np[t[i]]++;
    ll c1 = 0, c2 = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (np[s[i]] > 0)
        {
            c1++;
            np[s[i]]--;
            s[i] = '-';
        }
    }
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] != '-')
        {
            if (islower(s[i]) && np[toupper(s[i])] > 0)
                np[toupper(s[i])]--, c2++;
            else if (isupper(s[i]) && np[tolower(s[i])] > 0)
                np[tolower(s[i])]--, c2++;
        }
    }

    cout << c1 << " " << c2;
}