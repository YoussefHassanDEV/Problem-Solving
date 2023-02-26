#include <iostream>
#include <deque>
using namespace std;
void get_ac(int n, string s)
{
    deque<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_front(s[i]);
    }
    while (v.size()>0)
    {
        if (v.front() == '0' && v.back() == '1' || v.front() == '1' && v.back() == '0')
        {
            v.pop_back();
            v.pop_front();
        }
        else
            break;
    }
    int x=v.size();
    cout<<x;
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin>>n>>s;
        get_ac(n, s);
    }
}