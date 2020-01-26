#include <stdio.h>

int main (void)
{
	int x1,x2,y1,y2;
	int a,b;
	long long res;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	a = y2 - y1 + 1;
	if(x1+y1&1)
	{
		if((x2-x1)&1)
			res = (long long)(x2-x1+1)/2*a;
		else
			res = (long long)(x2-x1)/2*a+(a-1)/2;
	}
	else
	{
		if((x2-x1)&1)
			res = (long long)(x2-x1+1)/2*a;
		else
			res = (long long)(x2-x1)/2*a+(a+1)/2;
	}
	printf("%I64d",res);
	
	return 0;
}
