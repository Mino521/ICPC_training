#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
#define inf 1e18
typedef long long ll;
int c[105];
ll cost[105][105];
ll dp[105][105][105];
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++)
		cin >> c[i];
	for(int i = 1; i <= n; i++)
	{	
		for(int j = 1; j <= m; j++)
		if(c[i])
			cost[i][c[i]] = 0;		
	}		
	memset(dp,inf,sizeof(dp));
	for(int i = 0; i <= 105; i++)
	{
		for(int j = 0; j <= 105; j++)
		{
			dp[0][i][j] = 0;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(c[i])
			{
				dp[i][c[i]][j] = dp[i-1][c[i]][j];
				for(int p = 1; p <= m; p++)
				{
					if(c[i] != j)
						dp[i][c[i]][j] = min(dp[i][c[i]][j],dp[i-1][p][j-1]);
				}
			}
			else
			{
				for(int p = 1; p <= m; p++)
				{
					for(int q = 1; q <= m; q++)
					{
						if(p == q)
							dp[i][q][j] = min(dp[i][q][j],dp[i-1][p][j]+cost[i][q]);
						else
							dp[i][q][j] = min(dp[i][q][j],dp[i-1][p][j-1]+cost[i][q]);
					}
				}
			}
		}
	}
	ll ans = inf;
	for(int i = 1; i <= m; i++)
	{
		ans = min(ans,dp[n][i][k]);
	}
	if(ans >= inf)
	{
		cout << -1;
		return 0;
	}
	cout << ans;
	return 0;
}
