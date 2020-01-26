#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	long long d,k,a,b,t;
	cin >> d >> k >> a >> b >> t;
	long long ans = 0;
	if(d <= k)
	{
		//cout << 1 << endl;
		ans = d*a;
	}
	else
	{
		//cout << 3 << endl;
		if(a*k+t >= k*b)
		{
			ans =k*a+(d-k)*b;
		}
		else
		{
			long long n = d/k;
			ans+=n*k*a+(n-1)*t;
			long long dd = d - n*k;
			ans+=min(dd*b,t+dd*a);
		}
	}
	cout << ans;
	return 0;
}
