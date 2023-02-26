#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll a,n;
    cin>>n>>a;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++)
    cin>>v[i];
    v[0]=-1e9;
    for(int i=0;i<10000;i++)
    {
        sort(v.begin(),v.end());
        if(v[v.size()/2]==a)
        {
            cout<<i;
            return 0;
        }
        v.push_back(a);

    }
}