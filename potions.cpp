#include<iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int ,vector<int>,greater<int>> pq;
    int n=0,x=0,y=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        if(x>=0)
        {
            y+=x;
            cnt+=1;
        }
        else
        {
            pq.push(x);
        }
    }
    n=pq.size();
    for(int i=0;i<n;i++)
    {
        cnt+=1;
        y-=pq.top();
        if(y<=0)
        {
            break;
        }
    }
    cout<<cnt-1;
}