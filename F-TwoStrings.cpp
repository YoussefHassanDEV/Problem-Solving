#include <iostream>
#include <set>
using namespace std;
int main()
{
    int x = 0, t = 0, n = 0;
    string y1, y2;
    set<char> s1, s2;
    cin >> t;
    while (t--)
    {
        bool f = 0;
        cin >> y1 >> y2;
        for (int i = 0; i < y1.size(); i++)
            s1.insert(y1[i]);
        for (int i = 0; i < y2.size(); i++)
            s2.insert(y2[i]);
        int x = 0;
        x = s2.size();
        for (auto &i : s1)
        {
            s2.insert(i);
        }
        if (x + s1.size() == s2.size())
            puts("NO");
        else
            puts("YES");
        s1.clear(), s2.clear();
    }
}