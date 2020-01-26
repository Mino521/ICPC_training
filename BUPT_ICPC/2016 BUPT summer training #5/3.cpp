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
const int maxn = 100010;
vector<int> g[maxn],v[2];
int color[maxn];
bool ok = true;

void dfs(int k,int c)
{
	//cout << ' ' << k << ' ' << color[k] << endl;
	if(!ok)
		return;
	if(color[k] != -1)
	{
		if(color[k] != c)
			ok = false;
		return;
	}
	color[k] = c;
	//cout << '*' << k << ' ' << color[k] << endl;
	v[c].push_back(k);
	int len = g[k].size();
	for(int i = 0; i < len; i++)
	{
		dfs(g[k][i],c^1);
	}
}

int main()
{
	int n,m;
	cin >> n >> m;
	int u,w;
	for(int i = 0; i < m; i++)
	{
		cin >> u >> w;
		g[u].push_back(w);
		g[w].push_back(u);
	}
	memset(color,-1,sizeof(color));
	//cout << "2333\n";
	for(int i = 1; i <= n; i++)
	{
		if(color[i] == -1)
		{
			dfs(i,0);
			//cout << endl;
		}
	}
	if(!ok)
	{
		cout << -1;
		return 0; 
	}
	//cout << "ok!" << endl;
	for(int i = 0; i < 2; i++)
	{
		int len = v[i].size();
		cout << len << endl;
		for(int j = 0; j < len; j++)
		{
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
