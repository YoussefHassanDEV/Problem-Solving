#include <iostream>
#include <cmath>
#include <vector>
bool x[9999];
void sieve(int sz)
{
    x[0] = x[1] = 1;
    for (int i = 2; i * i <= sz; i++)
    {
        if (!x[i])
        {
            for (int j = i * i; j <= sz; j += i)
            {
                x[j] = 1;
            }
        }
    }
}
using namespace std;
vector<int> v;
int main()
{
    int cnt = 0, c = 0;
    int n = 0, m = 0;
    cin >> n >> m;
    sieve(n);
    int y[n];
    for (int i = 2; i < n; i++)
    {
        if (x[i] == 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (x[i] == 1)
        {
            continue;
        }
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] + v[j + 1] + 1 == i)
            {
                cnt += 1;
            }
        }
    }
    if (cnt >= m)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
}