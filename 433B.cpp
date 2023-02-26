#include <algorithm>
#include <iostream>
using namespace std;
int n=0, m=0;
int main()
{
    scanf("%d", &n);
    long long int y[n+5], z[n+5];
    for (int a = 1; a <= n; a++)
    {
        int v;
        scanf("%d", &v);
        y[a] = z[a] = v;
    }
    sort(y + 1, y + n + 1);
    for (int a = 1; a <= n; a++)
        z[a] += z[a - 1], y[a] += y[a - 1];
    scanf("%d", &m);
    for (int a = 1; a <= m; a++)
    {
        int opt, l, r;
        scanf("%d%d%d", &opt, &l, &r);
        if (opt == 1)
            printf("%I64d""\n",z[r] - z[l - 1]);
        else
            printf("%I64d""\n",y[r] - y[l - 1]);
    }
}