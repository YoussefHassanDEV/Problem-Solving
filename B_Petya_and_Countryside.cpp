#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll cnt = 0, n, mx = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        cnt = 1;
        int x = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[x])
                cnt += 1;
            else
                break;
            x++;
        }
        x = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] <= arr[x])
                cnt += 1;
            else
                break;
            x--;
        }
        mx = max(cnt, mx);
    }
    cout << mx;
}