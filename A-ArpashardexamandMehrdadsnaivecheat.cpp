#include <iostream>
using namespace std;
int main()
{
    int n{0};
    short x = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        x = (n) % 4;
        if (x == 1)
        {
            cout << 8;
        }
        else if (x == 2)
        {
            cout << 4;
        }
        else if (x == 3)
        {
            cout << 2;
        }
        else if (x == 0)
        {
            cout << 6;
        }
    }
}