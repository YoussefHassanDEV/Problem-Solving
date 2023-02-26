#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{

    int n = 100;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int a = 0, b = 0;
    cin >> a >> b;
    for (int i = a + 1; i < b; i++)
    {
        if (prime[i])
        {
            puts("NO");
            return 0;
        }
        cout<<prime[i];
    }
    puts("YES");
}