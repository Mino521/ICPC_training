#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	long long n;
	vector<int> prime;
	cin >> n;
	int mark[n];
	memset(mark,0,sizeof(mark));
	for(long long i = 2; i < n/2+1; i++)
	{
		long long m;
		for(int j = 2;;j++)
		{
			m = i*j;
			if(m > n)
				break;
			mark[m]++;
		}
	}
	for(int i = 2; i < n; i++)
	{
		//cout << mark[i] << ' ';
		if(mark[i] == 0)
		{
			prime.push_back(i);
		}
	}
	//cout << endl;
	int len = sizeof(prime);
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
	int index = 1;
	for(int i = 0; i < len; i++)
	{
		while(1)
		{
			//cout << n <<' ' << i << ' ' << prime[i] << endl;
			//cout << n%prime[i] << ' ' << n/prime[i] << endl;
			if(n%(long long)prime[i] == 0 && n/(long long)prime[i] != 1)
			{
				n = n/(long long)prime[i];
				index *= prime[i];
			}
			else
				break;
		}
		if(n/(long long)prime[i] == 1)
			break;
	}
	if(n < 3)
	{
		cout << -1;
		return 0;
	}
	cout << index << endl;
	cout << n*n/2*index <<' ' << (n*n/2+1)*index;
	return 0;
}
