#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        map<string, double> m;
        int n = 0, z = 0;
        cin >> n >> z;
        string s = "";
        double x = 0, cnt{0};
        m["JD"] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            cin >> x;
            m[s] = x;
        }
        for (int i = 0; i < z; i++)
        {
            cin >> x;
            cin >> s;
            cnt += x * (m[s]);
        }

        cout << setprecision(6) << cnt;
        cout<<"\n";
    }
}