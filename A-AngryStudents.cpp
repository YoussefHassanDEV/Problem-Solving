#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        deque<char> d;
        int n = 0,cnt=0,m=0;
        cin >> n;
        string z{""};
        char s{'s'};
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            d.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            if (d[0] == 'P')
            {
                d.pop_front();
            }
            else
            {
                d.pop_front();
                break;
            }
        }
        for (int i = 0; i < d.size(); i++)
        {
            if(d[i]=='A'&&d[i+1]=='A')
            {
                continue;
            }
            else if(d[i]=='P')
            {
                cnt+=1;
            }
            else if(d[i]=='A')
            {
                m=max(m,cnt);
                cnt=0;

            }
        }
        if(m>cnt)
        cout<<m<<"\n";
        else
        cout<<cnt<<"\n";
    
    }
}