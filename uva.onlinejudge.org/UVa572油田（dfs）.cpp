#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define maxn 105
char pic[maxn][maxn];
int m,n;
int idx[maxn][maxn];

void dfs(int r, int c, int id)
{
	if(r < 0 || r >= m || c < 0 || c >= n)//出界 
		return;
	if(idx[r][c] > 0 || pic[r][c] != '@')
		return;
	idx[r][c] = id;//连通分量编号
	for(int dr = -1; dr <= 1; dr++)
	{
		for(int dc = -1; dc <= 1; dc++)
		{
			if(dr != 0 || dc != 0)
				dfs(r+dr, c+dc, id);
		}
	 } 
}
int main()
{
	while(cin >> m >> n, m && n)
	{
		for(int i = 0; i < m; i++)
			scanf("%s",pic[i]);
		memset(idx,0,sizeof(idx));
		int cnt = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(idx[i][j] == 0 && pic[i][j] == '@')
					dfs(i,j,++cnt);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
