#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int l[a.size() + b.size()];
    string x = a, y = b;
    int cnt = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
    {
        for (int i = 0; i < a.size(); i++)
        {
            l[a[i]] += 1;
        }
        for (int i = 0; i < a.size(); i++)
        {
            l[b[i]] += 1;
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(x[a[i]]%2==0)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout <<"YES";
    }
    else
        cout << "NO";
}