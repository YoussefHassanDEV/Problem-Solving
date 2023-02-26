using namespace std;
#include<iostream>
int main()
{
    int x{0},y{0},z{0},c{0};
    cin>>x;
    for(int i=1;;i++)
    {
        if(x>=(i*(i+1)/2))
        {
            x-=(i*(i+1)/2);
            c=c+1;
        }
        else
        {
            break;
        }
    }
    cout<<c;
}