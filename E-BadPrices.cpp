#include<iostream>
using namespace std;
int arr[1000000]={};
int main()
{
    int t{0},n{0};
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int cnt{0};
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[i];
        }
           for(int k=n;k>0;k--)
        {
            if(arr[k]>arr[k-1])
            {
                cnt++;
            }
        }
        cout<<"Asdasd"<<cnt<<"\n";
    }
}