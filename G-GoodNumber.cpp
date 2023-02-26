#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string s = {"sda"};
int main()
{
    int t{0}, x{0}, cnt{0};
    bool f = 1;
    string s{"s"};
    char c{'s'};
    cin >> t >> x;
    while (t--)
    {
        cin >> s;
        f = 1;
        for (int i = 0; i <= x; i++)
        {
            c = i + 48;
            if (s.find(c)==-1)
            {
                f=0;
                break;
            }
        }
        if (f)
        {
            cnt+=1;
        }
    }
    cout<<cnt;
}