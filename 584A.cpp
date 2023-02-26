#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n = 0, m = 0;
    cin >> n >> m;
    if (m == 10)
    {
        if (n == 1)
            cout << -1;
        else
        {
            for (int i = 0; i < n - 1; i++)
                cout << 1;
            cout << 0;
        }
    }
    else
    {
        n -= 1;
        for (int i = 0; i < n; i++)
            cout << m;
        cout << m;
    }
}