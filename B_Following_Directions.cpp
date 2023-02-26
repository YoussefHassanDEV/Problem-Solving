#include <iostream>
using namespace std;
void get_ac(string x, int n)
{
    int x1 = 0, y1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'U')
            y1 += 1;
        else if (x[i] == 'D')
            y1 -= 1;
        else if (x[i] == 'R')
            x1 += 1;
        else if (x[i] == 'L')
            x1 -= 1;
        if (x1 == 1 && y1 == 1)
        {
            puts("YES");
            return;
        }
    }
        puts("NO");
}
int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        get_ac(s, n);
    }
}