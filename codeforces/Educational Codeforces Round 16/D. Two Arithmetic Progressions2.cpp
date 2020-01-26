#include <iostream>
using namespace std;
int main()
{
	int a1,b1,a2,b2,l,r;
	cin >> a1 >> b1 >> a2 >> b2 >> l >> r;
	int ans = 0;
	int n;
	if(l-b1 < 0)
		n = 0;
	else
	{
		n = (l-b1)/a1;
		if((l-b1)%a1 != 0)
			n++;
	}
	int n2;
	if(l-b2 < 0)
		n2 = 0;
	else
	{
		n2 = (l-b2)/a2;
		if((l-b2)%a2 != 0)
			n2++;
	}
	if(a1 == 1 && a2 == 1)
	{
		long long q = (long long)a1*(long long)n+(long long)b1;
		long long w = (long long)a2*(long long)n2+(long long)b2;
		long long pp;
		if(q>w)
			pp = q;
		else
			pp = w;
		long long ans = 0;
		if(pp <= r)
			ans = r-pp+1;
		cout << ans;
		return 0;
	}
	if(a1 == 1)
	{
		long long q = (long long)a1*(long long)n+(long long)b1;
		long long w = (long long)a2*(long long)n2+(long long)b2;
		long long pp;
		if(q>w)
			pp = q;
		else
			pp = w;
		long long ans = 0;
		if(pp <= r)
		{
			while(w < pp)
				w+=a2;
			ans = (r-w)/a2+1;
		}
		cout << ans;
		return 0;
	}
	if(a2 == 1)
	{
		long long q = (long long)a1*(long long)n+(long long)b1;
		long long w = (long long)a2*(long long)n2+(long long)b2;
		long long pp;
		if(q>w)
			pp = q;
		else
			pp = w;
		long long ans = 0;
		if(pp <= r)
		{
			while(q < pp)
				q+=a1;
			ans = (r-q)/a1+1;
		}
		cout << ans;
		return 0;
	}
	int p,q;
	p = a1*n+b1;
	q = a2*n2+b2;
	while(1)
	{
		if(p > r || q > r)
			break;
		if(p == q)
		{
			p+=a1;
			q+=a2;
			ans++;
			continue;
		}
		if(p < q)
		{
			p+=a1;
			continue;
		}
		q+=a2;
	}
	cout << ans;
	return 0;
}
