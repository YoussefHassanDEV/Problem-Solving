#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> st;
    char c;
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            c = s[i];
            if (st.empty())
                st.push(c);
            else
            {
                if (c == '{' || c == '(' || c == '[')
                    st.push(c);
                else if (c == '}')
                {
                    if (st.top() == '{')
                        st.pop();
                    else
                        st.push(c);
                }
                else if (c == ')')
                {
                    if (st.top() == '(')
                        st.pop();
                    else
                        st.push(c);
                }
                else if (c == ']')
                {
                    if (st.top() == '[')
                        st.pop();
                    else
                        st.push(c);
                }
            }
        }
        if (st.empty())
            puts("YES");
        else
            puts("NO");
        while (!st.empty())
            st.pop();
    }
}