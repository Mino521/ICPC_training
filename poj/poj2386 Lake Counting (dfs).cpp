#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 105;
char dp[maxn][maxn];
int n,m;
int mark[maxn][maxn];
void dfs(int x, int y, int cnt)
{
	if(x < 0 || y <0 || y >= n || x >= m)
		return;
	if(mark[x][y] != 0 || dp[x][y] != 'W')
		return;
	mark[x][y] = cnt;
	for(int i = -1; i < 2; i++)
	{
		for(int j = -1; j < 2; j++)
		{
			if(i != 0 || j != 0)
			{
				dfs(x+i, y+j, cnt);
			}
		}
	}
}
int main()
{
	freopen("poj2386.txt","r",stdin);
	while(~scanf("%d %d",&m, &n))
	{
		memset(mark,0,sizeof(mark));
		int cnt = 0;
		for(int i = 0; i < m; i++)
			cin >> dp[i];
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(mark[i][j] == 0 && dp[i][j] == 'W')
				{
					dfs(i,j,++cnt);
				}
			}
		}
		//for(int i = 0; i < m; i++)
		//{
		//	for(int j = 0; j < n; j++)
		//	{
		//		cout << mark[i][j] << ' ';
		//	}
	//		cout << endl;
		//}
		cout << cnt << endl; 
	}
	return 0;
}
