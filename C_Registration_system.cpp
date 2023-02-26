#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    int t, x = 0, y;
    cin >> t;
    string s;
    set<string> st;
    map<string, int> m;
    while (t--)
    {
        string z;
        cin >> s;
        y = st.size();
        st.insert(s);
        if (st.size() == y)
        {
            m[s]+=1;
            cout<<s<<m[s]<<"\n";
        }
        else
        {
            puts("OK");
        }
    }
}