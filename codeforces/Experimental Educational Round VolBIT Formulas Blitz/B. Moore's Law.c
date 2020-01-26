#include <stdio.h>

#define NUM 1.000000011

double cal (long);

int main (void)
{
	int a;
	long b;
	double result;
	
	scanf("%d %l64d", &a, &b);
	if(b == 0)
	{
		printf("%d",a);
	}
	else
	{
		result = a*cal(b);
	    printf("%lf", result);
	}

	return 0;
}

double cal (long p)
{
	double res;
	double m;
	
	if(p == 1)
	{
		res = NUM;
		return res;
	}
	
	m = cal(p/2);
	res = m*m;
	
	if(p&1)
	res = res*NUM;
	
	return res;
}
