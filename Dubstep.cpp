#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s.find("WUB")!=string::npos)
    {
        s.insert(s.find("WUB")," ");
        s.erase(s.find("WUB"),3);
    }
    cout<<s;
}