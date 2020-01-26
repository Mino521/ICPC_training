#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	ll a1,b1,a2,b2,l,r;
	cin >> a1 >> b1 >> a2 >> b2 >> l >> r;
	ll n1;
	if(l-b1 < 0)
		n1 = 0;
	else
	{
		n1= (l-b1)/a1;
		if((l-b1)%a1 != 0)
			n1++;
	}
	ll n2;
	if(l-b2 < 0)
		n2 = 0;
	else
	{
		n2 = (l-b2)/a2;
		if((l-b2)%a2 != 0)
			n2++;
	}
	ll a = n1*a1+b1;
	ll b = n2*a2+b2;
	if(a > b)
	{
		b = ((a-b2)/a2)*a2+b2;
	}
	if(a < b)
	{
		a = ((b-b1)/a1)*a1+b1;
	}
	ll lcmab = lcm(a1,a2);
	ll count = 0;
	while(1)
	{
		if(a == b)
			break;
		if(a < b)
		{
			a += a1;
			count += a1;
		}
		else
			b += a2;
		if(a > r || b > r)
			break;
		if(count > lcmab)
		{
			cout << 0;
			return 0;
		}
	}
	if(a != b || a > r || b > r)
	{
		cout << 0;
		return 0;
	}
	ll ans;
	ans = 1+(r-a)/lcmab;
	cout << ans;
	return 0;
}
