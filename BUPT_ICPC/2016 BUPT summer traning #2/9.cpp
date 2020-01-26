#include <iostream>
#include <cstdio>
using namespace std;
typedef unsigned long long ull;

ull gcd (ull a, ull b);

int main ()
{
	ull N,sum;
	while(scanf("%I64d",&N)!=EOF)
	{
		sum = 0;
		for(ull i = 1; i <= N;i++)
		{
			sum += gcd(i,N);
		}
		cout << sum << endl;
	}
	return 0;
 } 
 
ull gcd(ull a, ull b)
{
	return b == 0 ? a : gcd(b,a%b);
}

