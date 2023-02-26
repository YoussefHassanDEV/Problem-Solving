#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        bool ans = 1;
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            while (x > n || freq[x] > 1)
            {
                freq[x]--;
                x /= 2;
                freq[x]++;

                if (x == 0)
                {
                    ans = 0;
                    break;
                }
            }
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
}
