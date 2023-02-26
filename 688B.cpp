#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    string z =""; 
    z=s;
    reverse(z.begin(), z.end());
    string x = z + s;
    string y=x;
    reverse(y.begin(), y.end());
    if (x == y &&x[0]!='0')
    {
        cout << x;
    }
    else
    {
        cout << s + z;
    }
}