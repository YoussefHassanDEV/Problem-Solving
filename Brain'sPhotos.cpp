#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<char>c;
    int n=0,m=0;
    cin>>n>>m;
    n=n*m;
    char x='a';
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c.insert(x);
    }
    if(c.size()<=2)
    puts("#Black&White");
    else
    puts("#Color");

}