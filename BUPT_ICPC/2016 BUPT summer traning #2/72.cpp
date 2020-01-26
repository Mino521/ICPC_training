#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
	long long n;
	long long sum = 0;
	int p;
	
	cin >> n;
	for(long long i = 1; i <= n;i+=2)
	{
		p =1;
		for(long long j = 3;j < 9 ; j+=2)
		{
			if(i%j == 0)
			{
				p = 0;
				break;
			}
		}
		if(p)
		{
			sum++;
		}
	}
	cout << sum;
	
	return 0;
}
