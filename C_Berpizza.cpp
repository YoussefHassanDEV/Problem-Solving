#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q, m, a, cnt = 0;
    cin >> q;
    map<int, queue<int>> mp;
    queue<int> mono;
    priority_queue<int> poly;
    while (q--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> m;
            cnt +=1;
            mp[m].push(cnt);
            mono.push(m);
            poly.push(m);
        }
        else if (a == 2)
        {
            while (mp[mono.front()].empty())
                mono.pop();
            cout << mp[mono.front()].front() << " ";
            mp[mono.front()].pop();
        }
        else if (a == 3)
        {
            // poly serves
            while (mp[poly.top()].empty())
                poly.pop();
            cout << mp[poly.top()].front() << " ";
            mp[poly.top()].pop();
        }
    }

    return 0;
}