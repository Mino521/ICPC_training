#include <stdio.h>

int max (int, int);

int main (void)
{
	int m,n;
	int mm,nn;
	int a;
	int x1,x2,y1,y2;
	int r1,r2;
	int b1,b2;
	
	scanf("%d %d", &m, &n);
	mm = m*2;
	nn = n*3;
	
	if(mm>nn)
	{
		a=nn/6;
		if(n&1)
			n+=2;
		else
			n+=3;
		for(;;)
		{
			if(n*3 > mm || a==0)
				break;
			nn=n*3;
			n += 2;
			a --;
		}	
	}
	else
	{
		a=mm/6;
		m+=1;
		for(;;)
		{
			if((2*m)%3 != 00)
			{
				if(2*m++ < nn || a>0)
				{
					mm=m*2;
					a--;
				}
				else
					break;
			}
			
		}
	}
	x1 = 0;
	y1 = a;
	b1 = max(x1*2+mm,y1*3+nn);
	for(x2 = 1; x2 <= a; x2++)
	{
		y2 = a - x2;
		b2 = max(x2*2+mm,y2*3+nn);
		if(b2 < b1)
		{
			x1 = x2;
			y1 = y2;
			b1 = b2;
		}
	}
	
	printf("%d",b1);
	
	return 0;
}

int max (int a, int b)
{
	if(a > b)
	    return a;
	return b;
}

