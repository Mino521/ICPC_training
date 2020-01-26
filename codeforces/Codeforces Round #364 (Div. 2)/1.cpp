#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int a[n+1][2];
	int sum = 0, ave = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i][0];
		a[i][1] = 0;
		sum += a[i][0];
	}
	ave = sum * 2 / n;
	//cout << sum << ' ' << ave << endl;
	if(n == 2)
	{
		cout << 1 << ' ' << 2 << endl;
		return 0;
	}
	for(int j = 1, i = 1; j <= n/2 && i <= n; i++ )
	{
		if(a[i][1])
			continue;
		int k = ave - a[i][0];
		a[i][1] = 1;
		for(int p = 1; p <= n; p++)
		{
			if(a[p][1])
				continue;
			if(k == a[p][0])
			{
				cout << i << ' ' << p << endl;
				a[p][1] = 1;
				j++;
				break;
			}
		}
	}
	return 0;
 } 
