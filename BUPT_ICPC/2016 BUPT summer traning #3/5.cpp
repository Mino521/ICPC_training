#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int main ()
{
	int n,money;
	while(cin >> n, n)
	{
		int a[n+10];
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		cin >> money;
		if(money < 5)
		{
			cout << money <<endl;
			continue;
		}
		int re[money+10];
		memset(re,0,sizeof(re));
		sort(a+1,a+1+n);
		int ans;
		for(int i = 1; i < n; i++)
		{
			for(int j = money-5; j >= a[i]; j--)
			{
				re[j] = max(re[j], re[j-a[i]]+a[i]);
			}
		}
		//cout << re[61] << endl;
		//cout << re[57] << endl;
		//cout << re[7] << endl;
		ans = re[money-5];
		cout << money-ans-a[n] << endl;
	}
	return 0;
}

