#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s{""};
    char temp{'5'};
    int x{0};
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),','),s.end());
    s.erase(remove(s.begin(),s.end(),'{'),s.end());
    s.erase(remove(s.begin(),s.end(),'}'),s.end());
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=temp)
        {
            x+=1;
            temp=s[i];
            
        }
    }
    cout<<x;
}