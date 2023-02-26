#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int n, i;
    ll x, sum, k;
    cin >> n;
    int a[n];
    sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cin >> x;
    k = x / sum * n, x %= sum;
    for (i = 0; i < n && x >= 0; i++)
        x -= a[i];
    k += i;
    cout << k;
}