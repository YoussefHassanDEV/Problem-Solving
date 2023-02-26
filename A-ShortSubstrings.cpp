#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    while (x--)
    {
        string s{"s"};
        cin >> s;
        cout << s[0];
        for (int i = 0; i < s.size(); i++)
        {

            if (i % 2 != 0)
            {
                cout << s[i];
            }
        }
        cout<<"\n";
    }
}