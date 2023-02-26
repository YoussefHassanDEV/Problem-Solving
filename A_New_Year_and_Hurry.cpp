#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main()
{
    int n, k, i, sum, res, c;
    cin >> n >> k;
    res = 240 - k, sum = 0, c = 0;
    for (i = 1; i <= n; i++)
    {
        sum += 5 * i;

        if (sum > res)
            break;

        c = c + 1;
    }

    cout << c << endl;

    return 0;
}