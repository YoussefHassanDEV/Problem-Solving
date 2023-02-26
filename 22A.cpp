#include<iostream>
using namespace std;
int main()
{
    int n=0,cnt,x=0,y=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cin>>x;
        }
        else if(i%2==0)
        {
            cin>>y;
            
        }
        else
        {
            cin>>x;
        }
    }
}