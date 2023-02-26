#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000]={};
int main()
{
    int a{0},b{0},x{0};
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        cin>>arr[i];
    }
     for(int j=1;j<=a;j++)
    {
        if(arr[b]<=arr[j]&&arr[j]!=0)
        {
            x+=1;
        }
    }
    cout<<x;

}