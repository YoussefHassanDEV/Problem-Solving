#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
long long int sz=1000000;
vector<bool> x (sz+1,false);
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
    sieve(1000001);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,m=0,cnt=0,tst=0,ts=0;
        cin>>n>>m;
        for(int i=n;i<m;i++)
        {
            
            if(x[i]==0)
            {
                tst=i;
                ts=0;
                while(tst!=0)
                {
                    ts+=tst%10;
                    tst/=10;
                }
                if(x[ts]==0)
                {
                    cnt+=1;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}