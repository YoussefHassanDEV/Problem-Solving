#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set<char> st;
    int t = 0;
    cin >> t;
    char c;
    string s;
    int n = 0;
    cin >> c;
    while (t--)
    {
        bool f = 0;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= c)
            {
            st.insert(s[i]);
            }

        }
        if (st.size() == int(c - 48) + 1)
            n++;
        st.clear();
    }
    cout << n;
}