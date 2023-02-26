#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0;
    unordered_set<string> m;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (m.count(s) != 0)
        {
            m.erase(s);
            m.insert(s);
        }
        else
        {
            m.insert(s);
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << *it << "\n";
    }
}