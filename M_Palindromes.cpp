#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, z, t, x;
    cin >> s;
    z = s, t = s;
    int cnt = 0;
    for (int i = 0; i < z.size();)
    {

        z.erase(0, 1);
        x = z;
        reverse(x.begin(), x.end());
        if (z != x)
        {
            cnt = z.size();
            break;
        }
    }
    for (int i = 0; i < t.size();)
    {
        t.erase(0, 1);
        x = t;
        reverse(x.begin(), x.end());
        if (t != x)
        {
            if (cnt <= t.size())
                cnt = t.size();
            break;
        }
    }
    cout << cnt;
}