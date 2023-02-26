#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    string s;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout<<int(s[0]-'0')+int(s[2]-'0')<<"\n";
    }
}