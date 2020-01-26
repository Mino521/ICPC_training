#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int maxn = 100005;
vector<int> G[maxn];
int ans,last;

void dfs(int cur, int pre, int len)
{
	if(len > ans)
	{
		ans = len;
		last = cur;
	}
	for(int i = 0; i < G[cur].size(); i++)
	{
		int to = G[cur][i];
		if(to != pre)
			dfs(to,cur,len+1);
	}
}

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < maxn; i++)
		G[i].clear();
	for(int i = 0,a,b; i < m; i++)
	{
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	ans = 0;
	dfs(1,0,0);
	ans = 0;
	dfs(last,0,0);
	cout << ans;
	
	return 0;
} 
