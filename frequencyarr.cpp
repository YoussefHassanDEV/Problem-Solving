#include <bits/stdc++.h>
#define fastio                   
ios::sync_with_stdio(false); 
cin.tie(NULL);               
cout.tie(NULL);
using namespace std;
int main()
{
    fastio int t;
    cin >> t;
    while (t--)
    {
        int n, in;
        cin >> n;
        bool rp(0);
        int freq[100000 + 3] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> in, freq[in]++;
            if (freq[in] > 1)
                rp = 1;
        };
        (!rp) ? cout << "prekrasnyy\n" : cout << "ne krasivo\n";
    }
    return 0;
}