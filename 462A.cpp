#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char a[110][110];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%c", &a[i][j]);
        }
        getchar();
    }
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!flag)
            {
                int s = 0;
                if (a[i - 1][j] == 'o' && i - 1 > 0 && i - 1 <= n && j > 0 && j <= n)
                    s++;
                if (a[i + 1][j] == 'o' && i + 1 > 0 && i + 1 <= n && j > 0 && j <= n)
                    s++;
                if (a[i][j - 1] == 'o' && i > 0 && i <= n && j - 1 > 0 && j - 1 <= n)
                    s++;
                if (a[i][j + 1] == 'o' && i > 0 && i <= n && j + 1 > 0 && j + 1 <= n)
                    s++;
                if (s % 2 == 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}