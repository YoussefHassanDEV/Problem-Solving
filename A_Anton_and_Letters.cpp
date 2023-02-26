#include <iostream>
#include <set>
using namespace std;
int main()
{
    int x;
    string s;
    getline(cin,s);
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    st.erase('{');
    st.erase('}');
    st.erase(' ');
    st.erase(',');
    cout << st.size();
}