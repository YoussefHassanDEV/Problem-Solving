#include <iostream>
#include <cmath>
using namespace std;
#define ll int
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll x, y, z, k;
    bool f = 0;
    cin >> x >> y;
    z = abs(x - y);
    k = min(x, y);
    if (x < y)
        f = 1;
    if (f)
    {
        for (int i = 0; i < k; i++)
        {
            cout << "GB";
        }
        for (int i = 0; i < z; i++)
            cout << "G";
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << "BG";
        }
        for (int i = 0; i < z; i++)
            cout << "B";
    }
}