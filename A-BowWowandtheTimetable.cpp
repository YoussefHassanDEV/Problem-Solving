#include <iostream>
#include <cmath>
#include<string>
#include <stdlib.h>
#include <sstream>
using namespace std;
int main()
{
    unsigned long long int m{0}, d{0}, r = {0}, p{1},a{2},cnt{0},x{0};
    string n{""};
    cin >> n;
    m=n.length();
    while (m> 0)
    {
        stringstream k;
        k<<n[m-1];
        k>>r;
        d += r * p;
        m-=1;
        p *= 2;
    }
   while (d>a)
   {
        a=pow(2,x);
        cnt+=1;
        x+=2;
    }
    cout<<cnt-1;
}