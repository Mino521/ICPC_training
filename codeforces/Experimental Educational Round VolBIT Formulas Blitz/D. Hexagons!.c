#include <stdio.h>

int main (void)
{
	long long res = 0;
	long long n;
	
	scanf("%I64d", &n);
	if(n == 0)
		res = 1;
	else
		res = (3+3*n)*n+1;
	printf("%I64d", res);
	
	return 0;
}

