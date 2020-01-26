#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int *mark = new int[1000000001];
int main()
{
	long long n;
	cin >> n;

	memset(mark,0,sizeof(mark));
	//cout << mark[0] << endl;
	//cout << (*mark)[0] << endl;
	for(long long i = 2; i < n/2+1; i++)
	{
		long long m;
		for(int j = 2;;j++)
		{
			m = i*j;
			if(m > n)
				break;
			mark[m]++;
			//cout << m << ' ' << mark[m] << endl;
		}
	}
	if(n < 3)
	{
		cout << -1;
		return 0;
	}
	if(mark[n] == 0)
	{
		cout << n*n/2 << ' ' << n*n/2+1;
		return 0;
	}
	long long index = 1;
	while(1)
	{
		if(n%2 == 0 && n != 2)
		{
			n/=2;
			index*=2;
		}
		else
			break;
	}
	for(int i = n/2+1; i > 2; i--)
	{
		//cout << i << ' ' << mark[i] << endl;
		if(mark[i] == 0)
		{
			while(1)
			{
				if(n%(long long)i == 0 && n/(long long)i != 1)
				{
					n = n/(long long)i;
					index *= (long long)i;
				}
				else
					break;
			}
			if(n == (long long)i)
				break;
		}
	}
	if(n < 3)
	{
		//cout << "QQQ" << endl;
		cout << -1;
		return 0;
	}
	//cout << index << endl;
	cout << n*n/2*index <<' ' << (n*n/2+1)*index;
	return 0;
}
