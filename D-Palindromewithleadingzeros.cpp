#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = {""}, z{""};
    cin >> s;
    z = s;
    //z=original
    reverse(s.begin(), s.end());
    //s=reversed
    if (s == z)
    {
        cout << "Yes";
    }
    else
    {
        if (z[z.size()-1] == '0')
        {
            z.erase(z.size() - 1, 1);
        }
        s = z;
        reverse(s.begin(), s.end());
        if (s == z)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}