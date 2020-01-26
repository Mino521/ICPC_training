#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

ll c (ll a, ll b)
{
	ll ans = 1;
	if(b > a/2)
	{
		b = a-b;
	}
	for(ll i = 1,j = a;i <= b;i++,j--)
	{
		ans=ans*j/i;
	}
	cout << ans << endl;
	return ans;
}

ll a (ll a,ll b)
{
	ll ans = 1; 
	for(ll i = 0; i < b; i++, a--)
	{
		ans *= a;
	}
	cout << ans << endl;
	return ans;
}

int main ()
{
	int T;
	cin >> T;
	int n,k;
	for(int i = 0; i<T;)
	{
		cin >> n >> k;
		ll ans;
		int p;
		p = 1;
		if(k > n)
		{
			ans = 0;
			p = 0;
		}
		if(p)
		{
			ans = c(n,k) * a(n,k);
		}
		printf("Case %d: %lld\n",++i,ans);
	}
	return 0;
 } 

