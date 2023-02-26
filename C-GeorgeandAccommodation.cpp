using namespace std;
#include<iostream>
int main()
{
    int a{0},x{0},y{0},b{0};
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>x>>y;
        if(y-x>=2)
        {
            b++;
        }
    }
    cout<<b;
}