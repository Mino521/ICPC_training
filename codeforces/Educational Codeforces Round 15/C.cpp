#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	long long a[n],b[m];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	long long l = 0, r = 2e9+2;
	long long mid;
	while(l<r)
	{
		mid = (l+r)/2;
		int flag = 0;
		int x = 0;
		for(int i = 0; i < n; i++)
		{
			if(x > m)
			{
				flag = 1;
				break;
			}
			if(abs(a[i]-b[x]) <= mid)
				continue;
			else
			{
				x++;
				i--;
			}
		}
		if(flag == 1)
			l = mid+1;
		else
			r = mid;
		//cout << l << ' ' << r << endl;
	}
	cout << l;
	return 0;
}
