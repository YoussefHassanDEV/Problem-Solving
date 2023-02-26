#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main()
{
    map<string, int> m;
    int n = 0;
    cin >> n;
    string s;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s] += 1;
    }
   cout<<m.begin()->first;
}