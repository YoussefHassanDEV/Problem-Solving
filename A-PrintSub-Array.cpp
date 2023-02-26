#include<iostream>
using namespace std;
int arr[1000000]={0};
int main()
{
    int n{0},a{0},b{0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cin>>a>>b;
    for(int j=a;j<=b;j++)
    {
        cout<<arr[j];
        if(j<b)
        {
            cout<<' ';
        }
    }
}