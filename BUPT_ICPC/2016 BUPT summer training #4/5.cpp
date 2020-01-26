#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b,a%b);
}

int main ()
{
	int t,m,n;
	cin >> t;
	int a[100];
	int p,q;
	for(int i = 0; i<t;i++)
	{
		cin >> n >> m;
		memset(a,-1,sizeof(a));
		int sum1=0,sum2=0;
		if(n == 2)
		{
			cout << "1/1" << endl;
			continue;
		}
		for(int j=0;j<m;j++)
		{
			cin >> p >> q;
			a[p-1] = q;
		}
		if(a[n-1] == -1)
		{
			a[n-1] = 0;
		}
		sum2 = a[n-1];
		for(int j=n-2;j>=2;j--)
		{
			if(a[j] == -1)
			{
				a[j] = a[j+1];
			}
			sum2+=a[j];
		}
		if(a[0] == -1)
		{
			a[0] = 100;
		}
		if(a[1] == -1)
		{
			a[1] = a[0];
		}
		sum1 = a[0] + a[1];
		if(sum1 == 0)
		{
			cout << "1/1" <<endl;
			continue;
		}
		int g=gcd(sum1,sum2);
		cout << sum1/g << '/' << (sum1+sum2)/g <<endl;
	}
	return 0;
}
