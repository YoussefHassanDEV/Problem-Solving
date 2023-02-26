#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        n*=-1;
        int x=0,y=0;
        x=n%10;
        y=(n%100)/10;
        n/=100;
        if(x>y)
        {
            if(n==0)
            {
                if(y==0)
                cout<<y;
                else
                cout<<'-'<<y;
            }
            else
            cout<<'-'<<n<<y;
        }
        else
        {
            if(n==0)
            {
                if(x==0)
                cout<<x;
                else
                cout<<'-'<<x;
            }
            else
            cout<<'-'<<n<<x;
        }
        
    }
}