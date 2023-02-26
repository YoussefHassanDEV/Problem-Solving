#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long int a{0},b{0};
    cin>>a>>b;
    if(b<=((a+1)/2))
    {
        cout<<((b*2)-1);
    }
    else
    {
        cout<<(b-((a+1)/2))*2;
    }
    return 0;
}