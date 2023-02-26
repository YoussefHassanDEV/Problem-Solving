#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int x=0;
    string s{""};
    cin >> x;
    while (x--)
    {
        stack<char> d;
        getline(cin, s);
        bool h = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                d.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (d.top() == '[' || d.empty())
                {
                    h = 1;
                    break;
                }
                else
                {
                    d.pop();
                }
            }
            else if (s[i] == ']')
            {
                if (d.top() == '(' || d.empty())
                {
                    h = 1;
                    break;
                }
                else
                {
                    d.pop();
                }
            }
        }
        if (h == 1 || d.empty())
        {
            cout << "Yes"<< "\n";
        }
        else
        {
            cout << "No"<< "\n";
        }
    }
}
