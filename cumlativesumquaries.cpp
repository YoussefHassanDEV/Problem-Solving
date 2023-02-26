#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d", &n);
    int x[100000] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int l = 0, r = 0;
        scanf("%d %d", &l ,& r);
        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            cnt += x[i];
        }
        cout << cnt << "\n";
    }
}