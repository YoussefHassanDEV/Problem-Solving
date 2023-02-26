#include <iostream>
#include <stack>
#include<deque>
using namespace std;
int main()
{
    string s = "";
    int c=0;
    cin >> s;
    stack<char> st;
    deque<char>z;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || st.top() != '/')
        {
            st.push(s[i]);
            z.push_front(s[i]);
        }
        else if (st.top() == '/')
        {
            if (s[i] == '/')
            {
                continue;
            }
            else
            {
                st.push(s[i]);
                z.push_front(s[i]);
            }
        }
    }
    string x=s;
    if(z.size()>1&&z.front()=='/')
    {
        z.pop_front();
    }
    if(z.back()!='/')
    {
        cout<<'/';
    }
    int n=z.size();
    for(int i=0;i<n;i++)
    {
       cout<<z.back();
       z.pop_back();
    }
}