#include<iostream>
#include<cmath>
using namespace std;
int arr1[100]={};
int main()
{
    int n{0},a{0},b{0},cnt{0};
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>arr1[i];
    }
    cin>>a>>b;
    for(int j=a;j<b;j++)
    {
        cnt+=arr1[j];
    }
    cout<<cnt;

}