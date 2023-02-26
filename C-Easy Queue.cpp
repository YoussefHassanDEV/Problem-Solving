#include <iostream>
#include <queue>
#include <algorithm>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    queue<int> q;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (op == 2)
        {
            if (q.empty())
                ;
            else
                q.pop();
        }
        else if (op == 3)
        {
            if (q.empty())
                cout << "Empty!" << endl;
            else
                cout << q.front() << endl;
        }
    }
    return 0;
}