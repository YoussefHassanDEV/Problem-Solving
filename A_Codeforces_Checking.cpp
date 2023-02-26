#include<iostream>
using namespace std;
void get_ac(string x)
{
    char c;
    cin>>c;
    if(x.find(c)!=std::string::npos)
    puts("YES");
    else
    puts("NO");
}
int main()
{
    string s="codeforces";
    int t=0;
    cin>>t;
    while(t--)
    {
        get_ac(s);
    }
}