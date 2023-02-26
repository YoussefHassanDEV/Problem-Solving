#include<iostream>
#include<cmath>
using namespace std;
int arr[100]={};
int main()
{
    int n{0},avg{0},sum{0};
  for(int x=1;;x++)
    {
    cin>>n;
    if(n==0)
    {
        break;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        avg+=arr[i];
    }
    avg/=n;
    for(int i=0;i<n;i++)
    {
       sum+=abs(avg-arr[i]);
    }
    
    cout<<"Set #"<<x<<"\n";
    cout<<"The minimum number of moves is "<<sum/2<<"."<<"\n"<<"\n";
    }
}