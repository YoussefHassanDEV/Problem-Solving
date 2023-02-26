#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<long long int> d;
    long long int n{0};
    cin >> n;
    long long int x{0}, y{0};
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            d.push_front(y);
        }
        else if (x == 2)
        {
            d.pop_front();
        }
        else if (x == 3)
        {
            if (d.size() == 0)
            {
                cout << "Empty!";
            }
            else
            {
                cout <<d[0]<< " ";
            }
            cout << "\n";
        }
    }
}