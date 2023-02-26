#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0, cnt = 0, c = 0;
        bool h = 0, m = 0;
        cin >> n >> k;
        string s = "";
        cin >> s;
        for (int i = 0; i < n; i += (k + 1))
        {
            h = 0, m = 0;
            string x = "";
            if (i >= n)
            {
                break;
            }
            if (i == 0)
            {
                x = s.substr(i,k);
                if (s[i] == '0' && x.find('1') == -1)
                {
                    cnt += 1;
                }
            }
            else if (s[i] == '0')
            {
                x = s.substr(i,k);
                if (s[i] == '0' && x.find('1') == -1)
                {
                    h = 1;
                }
                x = s.substr(i,- k);
                if (s[i] == '0' && x.find('1') == -1)
                {
                    m = 1;
                }
                if (h == 1 && m == 1)
                {
                    cnt += 1;
                    s[i] == '1';
                }
            }
            else if (i + k >= n - 1)
            {
                x = s.substr(i,- k);
                if (s[i] == '0' && x.find('1') == -1)
                {
                    cnt+= 1;
                }
            }
        }
        cout << cnt << "\n";
    }
}