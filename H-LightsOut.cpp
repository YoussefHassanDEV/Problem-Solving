#include<iostream>
using namespace std;
int arr[3][3]={};
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]%2!=0)
            {
                arr[i][j]=0;
            }
            else if(arr[i][j]==0||arr[i][j]%2==0)
            {
                arr[i][j]=1;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
        }
    }

}