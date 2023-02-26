#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, z, k, l;
        cin >> s, z;
        int i, j;
        z = s[0];
        k = s.substr(1, s.size() - 2);
        l = s[s.size() - 1];
        i = z.compare(k);
        j = l.compare(k);
        if (i <= 0 && j <= 0)
            cout << s[0] << ' ' << s.substr(1, s.size() - 2) << ' ' << s[s.size() - 1] << "\n";
        else
        {
            int x = s.size();
            if (x % 2 == 0)
            {
                x = x / 2 - 1;
                cout << s.substr(0, x) << ' ' << s[x + 1] << ' ' << s.substr(x + 2) << "\n";
            }
            else
            {
                x=x / 2;
                cout<<s.substr(0,x)<<' '<<s[x]<<' '<<s.substr(x+1)<<"\n";
            }
        }
    }
}
