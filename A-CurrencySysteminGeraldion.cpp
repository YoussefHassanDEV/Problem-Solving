#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000] = {};
int main()
{
    int n{0}, x{0},m{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
       m=count(arr, arr + n, arr[0]);
        if (i == 0)
        {
            x = m;
        }
        if (x <=m)
        {
            x =m;
        }
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if (x == 1)
    {
        cout << -1;
    }
    else
    {
        cout << x;
    }
}