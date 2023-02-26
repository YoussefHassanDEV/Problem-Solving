#include<iostream>
#include<algorithm>
using namespace std;
int arr1[100]={};
int arr2[100]={};
int main()
{
    int t{0},n{0},cnt{0},x{0},y{0};
    cin>>t;
    for(int i=0;i<t;i++)
    {
        x=0;
        y=0;
        cnt=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        for(int k=0;;k++)
        {
            if(arr1[y]<arr2[x])
            {
                cnt++;
                x++;
                y++;
            }
            else if(arr1[y]==arr2[x])
            {
                x++;
                y++;
            }
            else if(arr1[y]>arr2[x])
            {
                y++;
            }
            if(x==n||y==n)
            {
                break;
            }
        }
        cout<<cnt;

    }
}