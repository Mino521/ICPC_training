#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	long n,x,y;
	cin >> n >> x >> y;
	long long *dp = new long long[10000010];
	memset(dp,0,sizeof(dp));
	dp[1] = x;
	for(long long i = 2; i <= n; i++)
	{
		if(i&1)
			dp[i] = min(dp[i-1]+x,dp[i/2+1]+x+y);
		else
			dp[i] = min(dp[i-1]+x,dp[i/2]+y);
	}
	cout << dp[n];
	return 0;
}
