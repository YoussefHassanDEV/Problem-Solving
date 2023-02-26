#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll a, b;
    cin >> a >> b;
    ll x[a];
    for (int i = 1; i <= a; i++)
        cin >> x[i];
    bool flag[a];
    for (int i = 1; i <= a; i++)
    {
        for (int j = i+1; i <= a; i++)
        {
            if (abs(i - b) == abs(j - b) && x[i] != x[b])
                flag[i] = flag[j] = 1;
        }
    }
    ll cnt = 0;
    for (int i = 1; i <= a; i++)
        if (x[i] == 1 && flag[i] != 1)
            cnt++;
    cout << cnt;
}