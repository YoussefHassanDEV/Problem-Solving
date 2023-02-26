#include<iostream>
using namespace std;
int arr1[100000]={};
int arr2[100000]={};
int main()
{
    int n{0},b{0},cnt{0};
    cin>>n;
    int max{0},min{0};
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(i==0)
        {
            max=b;
            min=b;
        }
        if(i!=0&&max<b)
        {
            max=b;
            cnt+=1;
        }
        if(i!=0&&min>b)
        {
            min=b;
            cnt+=1;
        }
    }
    cout<<cnt;
}