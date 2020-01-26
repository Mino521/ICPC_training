#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main ()
{
	long long n,sum;
	int p = 1;
	cin >> n;
	int map[n+1]={0};
	for(long long i = 3; i < 9; i+=2)
	{
		for(long long j = 1; j <= n; j++)
		{
			if(map[j])
				continue;
			else if(j & 1)
			{
				if(j%i == 0)
					map[j] = 1;
			}
			else
				map[j] = 1;
		}
	}
	
	sum = 0;
	for(long long k = 1;k <= n; k++)
	{
		if(map[k] == 0)
			sum++;
	}
	cout <<sum;
	
	return 0;
}
