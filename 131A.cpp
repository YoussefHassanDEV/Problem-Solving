#include <iostream>
using namespace std;
int main()
{
    string s;
    bool c = 1;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            c = 0;
            break;
        }
    }
    if (c ==1)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                s[i] = toupper(s[j]);
            else
                s[i] = tolower(s[j]);
            cout << s[j];
        }
    }
    else
        cout << s;
    return 0;
}