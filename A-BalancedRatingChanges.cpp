#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double x[100000]={};
int main()
{
    int n{0};
    cin>>n;
    int temp=0;
    bool t{0};
    int cnt{0};
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
        x[i]=x[i]/2;
        cnt+=x[i];
    }
    cout<<"\n";
    while(cnt!=)
    {
        cout<<x[i]<<"\n";
    }
}