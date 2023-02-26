#include <iostream>
#include <vector>

#define forn(i, n) for (int i = 0; i < int(n); ++i)

using namespace std;

int main()
{

    int n, v;
    cin >> n >> v;

    vector<int> ans;

    for (int i = 0; i < int(n); ++i)
    {
        bool u = false;
        int k, s;
        cin >> k;

        for (int j = 0; j < int(k); ++j)
        {
            cin >> s;
            if (!u && v > s)
            {
                u = true;
                ans.push_back(i);
            }
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < int(ans.size()); ++i)
            cout
        << ans[i] + 1 << " ";

    return 0;
}