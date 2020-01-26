#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn = 100010;
const ll inf = 1e16;
string str[maxn];
string revs[maxn];
ll dp[maxn][2];
ll num[maxn];
int main()
{
	//freopen("C. Hard problem.txt","r",stdin);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> num[i];
	for(int i = 1; i <= n; i++)
	{
		cin >> str[i];
		revs[i] = str[i];
		reverse(revs[i].begin(), revs[i].end());
	}
	dp[1][0] = 0;
	dp[1][1] = num[1];
	for(int i = 2; i <= n; i++)
	{
		dp[i][0] = inf;
		dp[i][1] = inf;
		if(str[i] >= str[i-1])
			dp[i][0] = min(dp[i-1][0],dp[i][0]);
		if(str[i] >= revs[i-1])
			dp[i][0] = min(dp[i-1][1],dp[i][0]);
		if(revs[i] >= str[i-1])
			dp[i][1] = min(dp[i][1],dp[i-1][0]+num[i]);
		if(revs[i] >= revs[i-1])
			dp[i][1] = min(dp[i][1],dp[i-1][1]+num[i]);
	}
	ll ans = min(dp[n][0],dp[n][1]);
	if(ans == inf)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}
