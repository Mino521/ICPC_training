#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
vector<int> a[1010];
int mark[1010];
int cou[1010];
void dfs(int p)
{
	//cout << p << endl;
	if(mark[p] != 0)
		return;
	mark[p]++;
	//cout << ' ' << p << endl;
	for(int i = 0; i < a[p].size(); i++)
	{
		dfs(a[p][i]);
	}
	return;
}
int main()
{
	freopen("C1. Brain Network (easy).txt","r",stdin);
	cin >> n >> m;
	if(n != m+1)
	{
		cout << "no";
		return 0;
	}
	int e,r;
	memset(cou,0,sizeof(cou));
	for(int i = 0; i < m; i++)
	{
		cin >> e >> r;
		a[e].push_back(r);
		a[r].push_back(e);
		cou[e]++;
		cou[r]++;
	}
	for(int i = 1; i <=n; i++)
	{
		if(cou[i] == 0)
		{
			//cout << i << endl;
			cout << "no";
			return 0;
		}
	}
	memset(mark,0,sizeof(mark));
	int cnt = 0;
	for(int i = 1; i <= n; i++)\
	{
		if(mark[i] == 0)
		{
			//cout << i << endl;
			dfs(i);
			cnt++;
			//cout << endl;
		}
	}
	//cout << cnt << endl;
	if(cnt > 1)
	{
		cout << "no";
		return 0;
	}
	cout << "yes";
	return 0;
}
