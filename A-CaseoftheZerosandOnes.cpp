#include<iostream>
using namespace std;
int main()
{
    string s={"s"};
    int n=s.size();
    cin>>n;
    cin>>s;
    int z=0,on=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            z+=1;
        }
        else
        {
            on+=1;
        }
    }
    cout<<abs(z-on);
}
