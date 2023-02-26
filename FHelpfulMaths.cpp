#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<char> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            continue;
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i == v.size() - 1)
        {
            break;
        }
        cout << '+';
    }
}