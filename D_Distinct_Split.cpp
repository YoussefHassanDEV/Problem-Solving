#include <iostream>
#include <set>
#include<algorithm>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, x, y,z;
        cin >> n;
        x = n / 2;
        string s;
        cin >> s;
        set<char> se;
        for (int i = 0; i < n; i++)
            se.insert(s[i]);
        y = se.size();
        cout<<min(2*y,n)<<"\n";
    }
}