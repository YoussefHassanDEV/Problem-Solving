#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x[n+10];
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if (c < k)
                x[i] = c;
            else
                x[i] = x[i - 1] + 1;
            c += i;
        }
        x[n] = k;
        for (int i = n - 1; i >= 1; i--)
        {
            if (x[i] >= x[i + 1])
            {
                x[i] = x[i + 1] - 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << ' ';
        }
        cout << "\n";
    }
}