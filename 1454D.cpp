#include <iostream>
#include <cmath>
#include<map>
using namespace std;
map<int,bool> x;
unsigned long long sz=10;
void sieve(int sz)
{
    x[0] = x[1] = 1;
    for (int i = 2; i * i <= sz; i++)
    {
        if (!x[i])
        {
            for (int j = i * i; j <= sz; j += i)
            {
                x[j] = 1;
            }
        }
    }
}
int main()
{

    sieve(sz);
    cout<<x[2];

}
