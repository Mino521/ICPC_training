#include <stdio.h>
#include <math.h>

int main (void)
{
	long long num;
	int result;
	long double b;
	
	scanf("%lld", &num);
	printf("%lld\n",num);
	b = pow(5.0, (float)num);
	printf("%Lf\n",b);
	result = (int)(b+0.5) % 100;
	printf("%d", result);
	
	return 0;
}
