#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t = 0;
    unsigned long long int x = 0, y = 0, a = 0, b = 0;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cin >> a >> b;
        unsigned long long int cnt1 = 0,cnt2=0;
        if(x<y)
        {
            swap(x,y);
        }
        cnt1=x*a+y*a;
        cnt2=(x-y)*a+y*b;
        cout<<min(cnt1,cnt2)<<"\n";
    }
}