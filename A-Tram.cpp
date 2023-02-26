#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000] = {};
int main()
{
    int n{0}, x{0}, y{0}, z{4};
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n ; i++)
    {
        cin >> x >> y;
        if (i == 0)
        {
            cnt += x + y;
            arr[0] = cnt;
        }
        else
        {
            cnt -= x;
            cnt += y;
            arr[i] = cnt;
        }
    }
    sort(arr, arr + n );
    cout << arr[n -1];
}