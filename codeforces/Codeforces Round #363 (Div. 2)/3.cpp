#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm> 
using namespace std;
int ans;
int dp[3][110];
int a[110];
int n;

int main ()
{
	cin >> n;
	memset(dp,0,sizeof(dp));
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		dp[0][i] = max(dp[0][i-1],max(dp[1][i-1],dp[2][i-1]));
		if(a[i] == 1 || a[i] == 3)
			dp[1][i] = max(dp[0][i-1], dp[2][i-1]) + 1;
		if(a[i] == 2 || a[i] == 3)
			dp[2][i] = max(dp[0][i-1], dp[1][i-1]) + 1;
	}
	ans = max(dp[0][n],max(dp[1][n],dp[2][n]));
	cout << n-ans;
	
	return 0;
}

