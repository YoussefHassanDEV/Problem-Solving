#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, z;
        cin >> s >> z;
        char a, b;
        a = s[s.size() - 1];
        b = z[z.size() - 1];
        if (a == b)
        {
            if (a == 'L')
            {
                if (s.size() < z.size())
                    puts("<");
                else if (s.size() > z.size())
                    puts(">");
                else
                    puts("=");
            }
            else if (a == 'S')
            {
                if (s.size() < z.size())
                    puts(">");
                else if (s.size() > z.size())
                    puts("<");
                else
                    puts("=");
            }
            else
                puts("=");
        }
        else
        {
            if (a == 'L')
                puts(">");
            else if (b == 'L')
                puts("<");
            else if (a == 'M')
                puts(">");
            else
                puts("<");
        }
    }
}