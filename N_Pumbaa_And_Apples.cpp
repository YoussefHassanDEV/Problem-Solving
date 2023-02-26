#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c, d, e;
    char r;
    cin >> b >> a >> c;
    ll x[a + 1][b + 1];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> x[i][j];
    }
        for (int i = 0; i < c; i++)
        {
            cin >> r >> d >> e;
            if (r == 'g')
            {
                cout << x[d][e] << "\n";
            }
            else if (r == 'r')
            {
                for (int i = 0; i < a; i++)
                {
                    swap(x[d][i], x[e][i]);
                }
            }
            else
            {
                for (int i = 0; i < b; i++)
                {
                    swap(x[i][d], x[i][e]);
                }
            }
        }
    }