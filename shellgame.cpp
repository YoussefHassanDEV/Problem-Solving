#include <iostream>
using namespace std;
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int x, i,l,m;
    cin >> x;
    int a[4]{0,1,2,3};
    for(int i=1;i<=3;i++)
    {
        cin>>l>>m;
        swap(a[l],a[m]);
    }
    for(int i=1;i<=3;i++)
    if(a[i]==x)
    {
        cout<<i;
        return 0;
    }
}