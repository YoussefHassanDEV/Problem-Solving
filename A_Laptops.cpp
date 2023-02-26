#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    ll x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x != y)
        {
            puts("Happy Alex");
            return 0;
        }
    }
    puts("Poor Alex");
}