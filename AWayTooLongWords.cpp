#include<iostream>
using namespace std;
int main()
{
    string s{""};
    int n{0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>s;
    if(s.size()<=10)
    {
        cout<<s<<"\n";
    }
    else if(s.size()>10)
    {
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
    }
    }
}