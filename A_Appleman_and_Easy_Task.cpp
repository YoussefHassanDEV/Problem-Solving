#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    short i, j, cnt = 0;
    char x[101][101];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> x[i][j];
    for (i = 0; i < n; i++)
    {
        cnt = 0;
        for (j = 0; j < n; j++)
        {
            if (j + 1 < n && x[i][j + 1] == 'o')
                cnt += 1;
            if (j - 1 >= 0 && x[i][j - 1] == 'o')
                cnt += 1;
            if (i + 1 < n && x[i + 1][j] == 'o')
                cnt += 1;
            if (i - 1 >= 0 && x[i - 1][j] == 'o')
                cnt += 1;
            if (cnt % 2 != 0)
            {
                puts("NO");
                return 0;
            }
        }
    }
    puts("YES");
}