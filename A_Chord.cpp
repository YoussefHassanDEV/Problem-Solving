#include <iostream>
#include <cstdio>
#include <map>
#include <stdio.h>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

map<string, int> m;

int judge(string a, string b, string c)
{

    int x = (m[b] - m[a] + 12) % 12;
    int y = (m[c] - m[b] + 12) % 12;
    int z = (m[c] - m[a] + 12) % 12;

    if (x == 4 && y == 3 && z == 7)
        return 1;
    if (x == 3 && y == 4)
        return 0;

    return -1;
}
int main()
{
    m["C"] = 1;
    m["C#"] = 2;
    m["D"] = 3;
    m["D#"] = 4;
    m["E"] = 5;
    m["F"] = 6;
    m["F#"] = 7;
    m["G"] = 8;
    m["G#"] = 9;
    m["A"] = 10;
    m["B"] = 11;
    m["H"] = 12;
    string a, b, c;

    cin >> a >> b >> c;
    if (judge(a, b, c) == 1 || judge(a, c, b) == 1 || judge(b, a, c) == 1 || judge(b, c, a) == 1 || judge(c, b, a) == 1 || judge(c, a, b) == 1)
        cout << "major" << endl;
    else if (judge(a, b, c) == 0 || judge(a, c, b) == 0 || judge(b, a, c) == 0 || judge(b, c, a) == 0 || judge(c, b, a) == 0 || judge(c, a, b) == 0)
        cout << "minor" << endl;

    else
        cout << "strange" << endl;
}