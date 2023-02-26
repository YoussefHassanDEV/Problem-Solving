#include<iostream>
#include<cmath>
using namespace std;
int mat[5][5]={};
int main()
{
    int x=0,y=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                x=i;
                y=j;
            }
        }

    }
    cout<<abs(x-3)+abs(y-3);
}