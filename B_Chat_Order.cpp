#include <cstdio>
#include <queue>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <ctime>
#include <cmath>
#include <cctype>
using namespace std;
#define maxn 200005
#define LL long long
int cas=1,T;
map<string,int> visit;
string s[maxn];
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for (int i = 0;i<n;i++)
		{
			cin >> s[i];
		}
		for (int i = n-1;i>=0;i--)
		{
			if (!visit[s[i]])
				cout << s[i] << endl;
			visit[s[i]]=1;
		}
	}
}