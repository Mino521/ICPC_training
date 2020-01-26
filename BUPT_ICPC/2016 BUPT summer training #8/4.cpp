#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <functional> 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define maxn 100010
int n,m,d,f[maxn],g[maxn];
vector<int> graf[maxn];
bool mark[maxn]={0};

void dfs1(int v, int p)
{
	f[v] = -1;
	for(int i = 0; i < graf[v].size(); i++)
	{
		int next = graf[v][i];
		if(next == p)
			continue;
		dfs1(next,v);
		f[v] = max(f[v], f[next] == -1 ? -1 : f[next]+1);
	}
	if(mark[v])
		f[v] = max(0,f[v]);
}

void dfs2(int v, int p, int root)
{
	g[v] = root;
	vector<int> sons;
	sons.push_back((root == -1 ? -1 : root+1));
	if(mark[v])
		sons.push_back(1);
	for(int i = 0; i < graf[v].size(); i++)
	{
		int next = graf[v][i];
		if(next == p)
			continue;
		sons.push_back((f[next] == -1 ? -1 : f[next]+2));
	}
	sort(sons.begin(),sons.end(), greater<int>());
	for(int i = 0; i < graf[v].size(); i++)
	{
		int next = graf[v][i];
		if(next == p)
			continue;
		int nroot = sons[1];
		if((f[next] == -1 ? -1 : f[next]+2) != sons[0])
			nroot = sons[0];
		dfs2(next,v,nroot);
	}
}

int main()
{
	cin >> n >> m >> d;
	int ans = 0;
	for(int i = 1; i <= m; i++)
	{
		int point;
		cin >> point;
		mark[point] = 1;
	}
	for(int i = 1; i < n; i++)
	{
		int u,v;
		cin >> u >> v;
		graf[u].push_back(v);
		graf[v].push_back(u);
	}
	dfs1(1,-1);
	dfs2(1,-1,-1);
	//for(int i = 1; i <= n; i++)
	//	cout << f[i] << ' ' << g[i] << endl;
	for(int i = 1; i <= n; i++)
		if(max(f[i],g[i]) <= d)
			ans++;
	cout << ans;
	return 0;
}

