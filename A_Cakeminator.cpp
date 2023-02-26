#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll a, b, l, m, cnt{0}, c;
    cin >> a >> b;
    char x[20][20];
    m = a;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> x[i][j];
    for (int i = 0; i < a; i++)
    {
        c = 0;
        for (int j = 0; j < b; j++)
        {
            if (x[i][j] == 'S')
                c += 1;
        }
        if (c == 0)
        {
            m--;
            cnt += b;
        }
    }
    for (int i = 0; i < b; i++)
    {
        c = 0;
        for (int j = 0; j < a; j++)
        {
            if (x[j][i] == 'S')
                c += 1;
        }
        if (c == 0)
            cnt += m;
    }
    cout << cnt;
}