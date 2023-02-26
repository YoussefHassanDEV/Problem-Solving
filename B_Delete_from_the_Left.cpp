#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int cnt = 0;
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] == b[i])
            cnt += 1;
        else
            break;
    }
    cout << a.size() - cnt + b.size() - cnt;
}