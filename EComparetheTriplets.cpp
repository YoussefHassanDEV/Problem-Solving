#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    int x = 0, y = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            x += 1;
        else if (b[i] > a[i])
            y += 1;
    }
    cout << x << ' ' << y;
}