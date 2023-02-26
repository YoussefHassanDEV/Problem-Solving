#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r=0,b=0;
    cin>>r>>b;
    cout<<min(r,b)<<' ';
    cout<<(max(r,b)-min(r,b))/2;
}