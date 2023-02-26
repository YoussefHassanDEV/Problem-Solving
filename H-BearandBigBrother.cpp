#include<iostream>
using namespace std;
int main()
{
    int a{0},b{0},x{0};
    cin>>a>>b;
    while(true)
    {
        x+=1;
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;
        }
    }
    cout<<x;
}