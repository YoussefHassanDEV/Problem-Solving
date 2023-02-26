#include <iostream>
#include <map>
#include <vector>
using namespace std;
void getac()
{
    map<char, int> m;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (m.count(v[i]) && m[v[i]] != s[i])
        {
            puts("NO");
            return ;
        }
        else if (m.count(v[i]) == 0)
        {
            m[v[i]] = s[i];
        }
    }
    puts("YES");
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        getac();
    }
}