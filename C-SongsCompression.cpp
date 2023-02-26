#include <iostream>
#include <algorithm>
using namespace std;
int x[100000] = {};
int main()
{
    long long int n{0}, m{0}, a{0}, b{0}, cnt{0}, c{0}, y{0}, cc{0};
    cin >> n >> m;
    y = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cnt += a;
        c += b;
        x[i] = a - b;
    }
    sort(x, x + n);
    if (cnt <= m)
    {
        cout << 0;
    }
    else if (c > m)
    {
        cout << -1;
    }
    else if (b == m)
    {
        cout << n;
    }
    else
    {
        for (int i = 0;; i++)
        {
            cc += 1;
            cnt -= x[y - 1];
            y -= 1;
            if (cnt <= m)
            {
                cout << cc;
                break;
            }
        }
    }
}