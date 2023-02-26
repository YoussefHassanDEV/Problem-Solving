#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int x[100000] = {};
int y[100000] = {};
int main()
{
    int n{0}, maxm{0}, minm{0}, l{0}, m{0}, cnt{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y, y + n);
    maxm = y[n - 1];
    minm = y[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i] == maxm)
        {
            m = i;
            break;
        }
    }
    for (int i = m; i > 0; i--)
    {
        cnt++;
        swap(x[i], x[i - 1]);
    }
    for (int i = n; i > 0; i--)
    {
        if (minm == x[i])
        {
            l = i;
            break;
        }
    }
    for (int i = l; i < n; i++)
    {
        cnt++;
    }
    cout << "\n"
         << cnt - 1;
}