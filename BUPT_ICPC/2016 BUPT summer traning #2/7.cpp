#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
	long long n,sum;
	int p = 1;
	cin >> n;
	if(n==1)
	{
		cout << 1;
		return 0; 
	}
	int map[n/2+1]={0};
	for(long long i = 3; i < 9; i+=2)
	{
		for(long long j = 1; j <= n; j+=2)
		{
			if(map[(j+1)/2])
				continue;
			else if(j%i == 0)
				map[(j+1)/2] = 1;
		}
	}
	
	sum = 0;
	for(long long k = 1;k <= n/2; k++)
	{
		if(map[k] == 0)
			sum++;
	}
	cout <<sum;
	
	return 0;
}
