#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long ab(long long x)
{
	if(x < 0)
		return -x;
	return x;
}
int main()
{
	int n;
	cin >> n;
	long long *a = new long long[n+1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	int p = (n+1)/2;
	int flag = n&1 ? 1:0;
	if(flag)
	{
		cout << a[p];
		return 0;
	}
	long long sum1 = 0, sum2 = 0;
	for(int i = 1; i <= n; i++)
	{
		sum1 += ab(a[i]-a[p]);
		sum2 += ab(a[i]-a[p+1]);
	}
	if(sum1 <= sum2)
	{
		cout << a[p];
		return 0;
	}
	cout << a[p+1];
	return 0;
}
