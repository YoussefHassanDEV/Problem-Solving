#include <iostream>
#include <algorithm>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int n{0},m{0},x{0},cnt{0},t{0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        d.push_back(x);
        cnt+=x;
    }
    for(int i=0;;i++)
    {
        t+=1;
        if(d[0]>m)
        {
            cnt-=m;
            x=d[0]-m;
            d.pop_front();
            d.push_back(x);
        }
        else
        {
            cnt-=d[0];
            d.pop_front();
            d.push_back(0);
        }
        if(cnt<=0)
        {
            break;
        }
    }
    while(t>n)
    {
        t-=n;
    }
    cout<<t;
}