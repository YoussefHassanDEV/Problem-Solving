#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
const int N = 1e6 + 5;
bool prime[N];
void sieve()
{
    memset(prime, true, sizeof prime);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j < N; j += i)
                prime[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll sq = sqrt(x);
        if (sq * sq == x && prime[sq])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}