#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
#define maxn 6010
int n,maxp;
int dp[maxn][2];
int fa[maxn];
int v[maxn];

void treedp (int node);

int main ()
{
	cin >> n;
	memset(dp,0,sizeof(dp));
	memset(fa,0,sizeof(fa));
	memset(v,0,sizeof(v));
	for(int i = 1; i <= n; i++)
	{
		cin >> dp[i][1];
	}
	int a,b;
	int root = 0;
	while(scanf("%d %d",&a,&b), a || b)
	{
		fa[a] = b;
		root = b;
	}
	while(fa[root])
		root = fa[root];
	treedp(root);
	maxp = max(dp[root][0],dp[root][1]);
	cout << maxp;
	
	return 0;
}

void treedp(int node)
{
	for(int i = 1; i <= n; i++)
	{
		if(fa[i] == node)
		{
			treedp(i);
			dp[node][1] += dp[i][0];
			dp[node][0] += max(dp[i][0], dp[i][1]);
		}
	}
}
