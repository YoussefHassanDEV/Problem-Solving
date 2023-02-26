#include<iostream>
using namespace std;
int main()
{
    int a{0};
    char c{'c'};
    for(int i=0;i<26;i++)
    {
    cin>>a;
    a=a+96;
    cout<<char(a);
    }
}