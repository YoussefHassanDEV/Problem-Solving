#include<iostream>
using namespace std;
int main()
{
    int n{0},b{0},c{0},cnt{0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cin>>b;
        }
        else
        {
            cin>>c;
        }
        if(b!=c)
        {
            cnt++;
        }
    }
    cout<<cnt;
}