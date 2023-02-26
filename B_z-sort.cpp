#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int
int main()
{
    ll n, x;
    cin >> n;
    ll a[n + 2]{}, b[n + 2]{};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    x = n;
    for (int i = 2; i <= n; i += 2)
        b[i] = a[x], x--;
    for (int i = 1; i <= n; i += 2)
        b[i] = a[x], x--;
    for (int i = 1; i <= n; i++)
        cout << b[i] << ' ';
}