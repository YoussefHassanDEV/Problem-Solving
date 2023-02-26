#include<iostream>
using namespace std;
int arr[12][12]={};
int main()
{
    int n{0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                arr[i][j]=1;

            }
            else
            {
                //ai, j = ai - 1, j + ai, j - 1.
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }

    }
    cout<<arr[n-1][n-1];

}