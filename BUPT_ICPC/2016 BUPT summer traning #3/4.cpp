#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
#define maxn 110

int main ()
{
	int dp[maxn][4];
	int a[maxn];
	int n;
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	memset(dp,0,sizeof(dp));
	int mx=0;
	for(int i=1;i<=n;i++){
		dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		if(a[i] == 1 || a[i] == 3)
			dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + 1;
		if(a[i] == 2 || a[i] == 3)
			dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + 1;
		int ans = max(dp[i][0], max(dp[i][1], dp[i][2]));
		mx = max(mx, ans);
	}
	cout << n-mx << endl;
	return 0;
}

