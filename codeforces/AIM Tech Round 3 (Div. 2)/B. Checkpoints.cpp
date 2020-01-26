#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll n,a;
	cin >> n >> a;
	ll x[n+1];
	for(int i = 1; i <= n; i++)
		cin >> x[i];
	sort(x+1,x+n+1);
	if(n == 1)
	{
		cout << 0;
		return 0;
	}
	if(n == 2)
	{
		cout << min(abs(a-x[1]),abs(a-x[2]));
		return 0;
	}
	int flag = n+1;
	for(int i = 1; i <= n; i++)
	{
		if(x[i] > a)
		{
			flag = i-1;
			break;
		}
	}
	if(flag == 0)
	{
		cout << abs(a-x[n-1]);
		return 0;
	}
	if(flag == n+1)
	{
		cout << abs(a-x[2]);
		return 0;
	}
	ll res1 = min((abs(a-x[1])+abs(x[1]-x[n-1])),(abs(a-x[2])+abs(x[2]-x[n])));
	ll res2 = min((abs(a-x[n-1])+abs(x[1]-x[n-1])),(abs(a-x[n])+abs(x[2]-x[n])));
	cout << min(res1,res2);
	return 0;
}