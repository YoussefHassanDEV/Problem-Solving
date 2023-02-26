#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int x[1000000]={};
int y[1000000]={};
int main()
{
    int n{0},m{0},temp{0},z{0};
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x[i];
    }
    sort(x,x+m);
    for(int i=0;i<m-1;i++)
    {
           if(i==0)
        {
            temp=abs(x[i]-x[i+n-1]);
             
        }
        else if(i+n>=m)
        {
            if(abs(x[i]-x[m-1])<temp)
            {
                temp=abs(x[i]-x[m-1]);
                
            }
        }
        else if(x[i+n-1]-x[i]<temp)
        {
            temp=abs(x[i]-x[i+n-1]);
        }
    }
    cout<<temp;
}