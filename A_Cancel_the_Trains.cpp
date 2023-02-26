#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v1(1000), v2(1000);
    int a = 0, b = 0, c = 0;
    while (t--)
    {
        cin >> a >> b;
        int i = 0;
        for (i = 0; i < a; i++)
            cin >> v1[i];
        i = 0;
        for (i = 0; i < b; i++)
            cin >> v2[i];
        for (i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                if (v1[i] == v2[j])
                    c++;
        cout << c<<"\n";
        i = 0, c = 0, a = 0, b = 0;
        v1.clear(), v2.clear();
    }
}