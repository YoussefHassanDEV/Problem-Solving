#include<iostream>
using namespace std;
int main()
{
    int x{0},y{0};
    cin>>x;
    int a{0},b{0},c{0};
    for(int i=0;i<x;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            y++;
        }
    }
    cout<<y;
}