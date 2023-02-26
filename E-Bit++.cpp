#include<iostream>
using namespace std;
int main()
{
    int x{0},y{0};
    string s{"s"};
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>s;
        if(s=="X++"||s=="++X")
        {
            y++;
        }
        else
        {
            y--;
        }
    }
    cout<<y;
}