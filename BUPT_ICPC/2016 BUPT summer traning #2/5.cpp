#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

long long c (long long n, long long m);

int main ()
{
	long long n;
	cin >> n;
	long long res;
	res = c(n,5)+c(n,6)+c(n,7);
	cout << res;
	
	return 0;
}

long long c (long long n, long long m)
{
	long long ans = 1;
	for(int i = n,j=1;j<=m;i--,j++)
	{
		ans = ans*i/j;
	}
	
	return ans;
}
