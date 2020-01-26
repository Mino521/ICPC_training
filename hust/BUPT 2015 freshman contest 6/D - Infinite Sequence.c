#include <stdio.h>
#include <math.h>

int main (void)
{
	int ans,a;
	long long in,b;
	
	scanf("%l64d", &in);
	if(in>100000000)
	{
		int m = in/100000000;
		a = (int)(sqrt(2*m));
		for(;;a++)
		{
			if(b = (a+1)*a/2*100000000 >= in)
				break;
		}
	}
	else
	{
		int m = (int)in;
		a = (int)(sqrt(2*m));
		for(;;a++)
		{
			if(b = (a+1)*a/2 >= in)
				break;
		}
	}
	a -= 1;
	ans = in - (1+a)*a/2;
	printf("%d", ans);
	
	return 0;
}
