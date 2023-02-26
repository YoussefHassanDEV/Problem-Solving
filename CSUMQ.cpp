#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll a, b,c,i,j;
    cin >> a;
    ll x[a];
    x[0]=0;
    for (int i = 1; i <= a; i++)
    {
        cin>>x[i];
        x[i]+=x[i-1]; 
    }
    cin>>b;
    while(b--)
    {
        cin>>i>>j;
        j+=1,i+=1;
        cout<<x[j]-x[i-1]<<"\n";
    }
    
}