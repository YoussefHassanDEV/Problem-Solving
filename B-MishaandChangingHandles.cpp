#include <iostream>
#include <string>
using namespace std;
string x[10000] = {};
string y[10000] = {};
int main()
{
    int n = 0;
    int z = 0;
    cin >> n;
    z = n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if (x[i] == "ILoveCodeforces" || y[i] == "ILoveCodeforces")
        {
            z-=1;
        }
    }
    cout<<z<<"\n";
    if (n % 2 != 0)
    {
        if (x[n - 1] != "ILoveCodeforces" && y[n - 1] != "ILoveCodeforces")
        {
            cout << x[n - 1] << ' ' << y[n - 1] << "\n";
        }
        n -= 1;
    }
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (x[i] != "ILoveCodeforces" && y[j] != "ILoveCodeforces" && x[i] != y[j])
        {
            cout << x[i] << ' ' << y[j] << "\n";
        }
    }
}