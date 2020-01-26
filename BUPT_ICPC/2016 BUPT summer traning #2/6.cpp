#include <cstdio>
#include <iostream>

using namespace std;

long long c (long long a, long long b);

int main ()
{
	int n;
	long long a,b;
	
	cin >> n;
	a = c(n,1) + c(n,2)*4 + c(n,3)*6 + c(n,4)*4 + c(n,5);
	b = c(n,1) + c(n,2)*2 + c(n,3);
	cout << a*b;
	
	return 0;
 } 
 
long long c (long long a, long long b)
{
	if(b > a)
	{
		return 0;
	}
	long long res = 1;
	for(int i = 1; i <= b;i++)
	{
		res = res*a/i;
		a--;
	}
	
	return res;
}
