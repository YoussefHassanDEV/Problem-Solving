#include <iostream>
#include <stack>
using namespace std;
#define ll long long int
int main()
{
    stack<ll> d;
    int n = 0, x = 0, y = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            d.push(y);
        }
        if (x == 2)
        {
            if (!d.empty())
                d.pop();
        }
        if (x == 3)
        {
            if (d.size() == 0)
            {
                cout << "Empty!";
            }
            else
            {
                cout << d.top();
            }
            cout << "\n";
        }
    }
    return 0;
}