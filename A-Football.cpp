#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000] = {0};
string str[1000] = {};
int main()
{
    int n{0}, x{1};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    sort(str, str+n);
    for (int j = 0; j < n; j++)
    {
        if(str[j]==str[j+1])
        {
            arr[x]+=1;
        }
        else
        {
            x++;
        }

    }
    sort(arr,arr+x);
    cout<<str[arr[x-1]];
}