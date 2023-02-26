#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    char c='c';
    cin >> s;
    stack<char> st;
    for (int i = 0; i<s.size(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top()== s[i])
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if (st.empty())
        puts("Yes");
    else
        puts("No");
}