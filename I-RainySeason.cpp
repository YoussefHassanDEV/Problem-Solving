#include<iostream>
using namespace std;
int main()
{
    int x{0},y{0};
    string s="s";
    cin>>s;
    for(int i=0;i<3;i++)
    {
        if(s[i]=='R')
        {
            y=1;
            x++;
        }
        else if(y==1)
        {
            break;
        }


    }
}