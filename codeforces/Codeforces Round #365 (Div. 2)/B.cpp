#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int n,k;
	ll c[100010];
	int mark[100010];
	cin >> n >> k;
	ll ans = 0;
	int p[n+1],mark2[n+1][n+1];
	for(int i = 1; i <= n; i++)
		cin >> c[i];
	memset(mark,0,sizeof(mark));
	memset(mark2,0,sizeof(mark2));
	for(int i = 1; i <= k; i++)
	{
		cin >> p[i];
		mark[p[i]] = 1;
	}
	for(int i = 1; i <= n; i++)
	{
		if(i == n)
		{
			ans += (ll)c[n]*(ll)c[1];
		}
		else
		{
			ans += (ll)c[i]*(ll)c[i+1];
		}
	}
	//cout << ans << endl;
	for(int i = 1; i <= k; i++)
	{
		int m = p[i];
		if(m == 1)
		{
			for(int j = 3; j < n; j++)
			{
				if(mark2[m][j] == 0)
					ans += (ll)c[m]*(ll)c[j];
				mark2[m][j] = 1;
				mark2[j][m] = 1;
			}
			continue;
		}
		if(m == n)
		{
			for(int j = 2; j < n-1; j++)
			{
				if(mark2[m][j] == 0)
					ans += (ll)c[m]*(ll)c[j];
				mark2[m][j] = 1;
				mark2[j][m] = 1;
			}
			continue;
		}
		for(int j = 1; j <= n; j++)
		{
			if(j == 1)
			{
				if(m != 1 &&  m != n && m != 2)
				{
					if(mark2[m][j] == 0)
						ans += (ll)c[m]*(ll)c[j];
					mark2[m][j] = 1;
					mark2[j][m] = 1;
				}
			}
			else if(j == n)
			{
				if(m != 1 && m != n && m != n-1)
				{
					if(mark2[m][j] == 0)
						ans += (ll)c[m]*(ll)c[j];
					mark2[m][j] = 1;
					mark2[j][m] = 1;
				}
			}
			else
			{
				if(abs(m-j) > 1)
				{
					if(mark2[c[m]][c[j]] == 0)
						ans += (ll)c[m]*(ll)c[j];
					mark2[m][j] = 1;
					mark2[j][m] = 1;
				}
			}
			//cout << ans<< endl;
		}
	}
	cout << ans;
	return 0;
}

