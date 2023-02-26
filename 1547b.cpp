#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s{""};
        cin >> s;
        int cnt=0;
        for (int i = 1; i <= s.size() - 1; i++)
        {
            
            if (i % 2 != 0)
            {
                if (int(s[i-1]) > int(s[i]))
                {
                    cnt+=1;
                }
            }
            else if (i % 2 == 0)
            {
                if (int(s[i-1]) < int(s[i]))
                cnt+=1;
            }
        }
        if(cnt==s.size()-1)
        {
            puts("Yes");
        }
        else
        {
            puts("no");
        }
    }
}