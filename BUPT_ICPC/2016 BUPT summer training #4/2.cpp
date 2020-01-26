#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
const int maxn = 2e5+5;

int n,m,h;
ll dp[maxn];

int main()
{
	int i,j,d;
	cin >> n >> m;
	for(h = 0;(h+1)*(h+2)/2 <= n+m;h++);
	dp[0] = 1;
	for(i = 1; i <= h; i++)
	{
		for(j = n; j >= i ;j--)
		{
			dp[j] = (dp[j]+dp[j-i])%MOD;
			for(int k = 0;k<n;k++)
				cout << dp[k] << ' ';
			cout << endl;
		}
	}
	ll ans = 0;
	for(int i = max(0,h*(h+1)/2-m); i<=n;i++)
	{
		ans = (ans+dp[i])/MOD;
	}
	cout << ans;
	return 0;
}
