#include <stdio.h>
#define ll long long

int main (void)
{
	ll a,b,c,sum;
	ll num;
	ll n;
	
	scanf("%I64d",&sum);
	scanf("%I64d %I64d %I64d",&a,&b,&c);
	if(a>sum && b>sum)
		num=0;
	else
	{
		if((b-c)>=a)
		{
			num = sum/a;
		}
		else
		{
			num = (sum-c)/(b-c);
			if(num < 0)
				num = 0;
			if(a<b)
			{
				if(n = (sum-num*(b-c))/a)
					num+=n;
			}
		}
	}
	
	printf("%I64d",num);
	
	return 0;
}

