#include <stdio.h>
#include <math.h>

int main (void)
{
	int num;
	long long res;
	
	scanf("%d", &num);
	res = (long long)(2*(pow(2.0, (float)num ) - 1) );
	printf("%I64d", res);
	
	return 0;
}
