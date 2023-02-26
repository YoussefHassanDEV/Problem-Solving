#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int cnt = 0;
    string z = s;
    reverse(z.begin(), z.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) != int(z[i]))
        {
            cnt += 1;
        }
    }
    if (cnt == 0 && s.size() % 2 != 0)
    {
        s[s.size() / 2] += 1;
        z = s;
        reverse(s.begin(), s.end());
        if (s == z)
        {
            cnt += 2;
        }
    }
    if (cnt == 2)
        puts("YES");
    else
    {
        puts("NO");
    }
}