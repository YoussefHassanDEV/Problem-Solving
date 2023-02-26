#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    string s = "";
    cin >> s;
    int cnt;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            if (s[i] == s[i + 1])
            {
                cnt += 1;
            }
        }
    }
    if(cnt*2==x)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}