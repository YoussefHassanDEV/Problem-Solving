#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n{0},cnt{0};
    string s{"s"};
    cin >> n >> s;
    for (int j = 0; j < n; j++)
    {
        s[j] = tolower(s[j]);
    }
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        sort(s.begin(),s.end());
        for (int i = 0; i < n; i++)
        {
          if(s[i]!=s[i+1])
          {
              cnt+=1;
          }  
        }
        if(cnt>=26)
        {
            cout<<"YES";

        }
        else
        {
            cout<<"NO";
        }
    }
}