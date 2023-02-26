#include <iostream>
#include <cmath>
#include <set>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int n;
        cin >> n;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        if(s.size()==n)
        puts("YES");
        else
        puts("NO");
    }
}