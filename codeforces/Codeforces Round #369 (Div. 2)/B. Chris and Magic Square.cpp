#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin >> n;
	if(n == 1)
	{
		printf("1");
		return 0;
	}
	int a[n+1][n+1];
	ll sumr[n+1],sumc[n+1],dia1 = 0, dia2 = 0;
	memset(sumr,0,sizeof(sumr));
	memset(sumc,0,sizeof(sumc));
	int memr,memc;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if(a[i][j] == 0)
			{
				memr = i;
				memc = j;
			}
			sumr[i] += a[i][j];
			sumc[j] += a[i][j];
			if(i == j)
				dia1 += a[i][j];
			if(i+j == n+1)
				dia2 += a[i][j];
		}
	}
	if(sumr[memr] != sumc[memc])
	{
		printf("-1");
		return 0;
	}
	ll memsumr,memsumc;
	for(int i = 1; i <= n; i++)
	{
		if(i == memr)
			continue;
		if(i == 1 && memr != 1)
		{
			memsumr = sumr[i];
			continue;
		}
		if(memr == 1 && i == 2)
		{
			memsumr = sumr[i];
			continue;
		}
		if(sumr[i] != memsumr)
		{
			printf("-1");
			return 0;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(i == memc)
			continue;
		if(i == 1 && memc != 1)
		{
			memsumc = sumc[i];
			continue;
		}
		if(memc == 1 && i == 2)
		{
			memsumc = sumc[i];
			continue;
		}
		if(sumc[i] != memsumc)
		{
			printf("-1");
			return 0;
		}
	}
	if(memsumr != memsumc)
	{
		printf("-1");
		return 0;
	}
	ll ans = memsumr - sumr[memr];
	if(ans <= 0)
	{
		printf("-1");
		return 0;
	}
	if(memr == memc)
		dia1 += ans;
	if(memr+memc == n+1)
		dia2 += ans;
	if(memsumr == dia1 && memsumr == dia2)
	{
		cout << ans;
		return 0;
	}
	cout << -1;
	return 0;
}
