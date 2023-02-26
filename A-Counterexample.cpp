#include<iostream>
using namespace std;
int main()
{
    unsigned __int64 x{0},y{0},cnt{3};
    cin>>x>>y;
    if(y-x<=1)
    {
        cout<<-1;
    }
    else
    {
        for(int i=x;i<=x+3;i++)
        {
            cout<<i<<' ';
            cnt-=1;
            if(cnt==0)
            {
                return 0;
            }
        }
    }

}