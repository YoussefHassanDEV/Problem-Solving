#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n{0};
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string s="";
        cin>>s;
        if(m[s]==0)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<m[s]<<"\n";
        }
        m[s]++;
    }

}