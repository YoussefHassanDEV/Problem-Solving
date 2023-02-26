#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        d.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        d.push_back(d.front());
        d.pop_front();
    }
    for(int i=0;i<n;i++)
    {
        cout<<d.front()<<' ';
        d.pop_front();
    }
}