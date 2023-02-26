#include <iostream>
using namespace std;
int main()
{
    string s = {"s"};
    int c{0}, n{0}, m{0};
    cin >> n >> m;
    for (int i = 0; i < n * m; i++)
    {
        cin >> s;
        if (s == "B")
        {
           continue;
        }
        else if (s == "W")
        {
            continue;
        }
         else if (s == "G")
        {
            continue;        }
        else
        {
            c += 1;
        }
    }
    if (c == 0)
    {
         cout << "#Black&White";
        
    }
    else
    {
       cout << "#Color";
    }
}