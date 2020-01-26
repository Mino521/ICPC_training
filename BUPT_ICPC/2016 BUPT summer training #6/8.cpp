#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <cstring>
#include <cmath>
#define ESP 1e-8
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	int n;
	cin >> n;
	while(n>0)
	{
		n--;
		double x1,x2,x3,x4,y1,y2,y3,y4;
		double a,b,c,d,x,y;
		int p = 1;
		double s;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if(x1-x2 != 0)
		{
			a = ((double)y1-(double)y2)/((double)x1-(double)x2);
			b = (double)y1-a*(double)x1;
		}
		else
			p = 0;
		if(x3-x4 != 0)
		{
			c = ((double)y3-(double)y4)/((double)x3-(double)x4);
			d = (double)y3-c*(double)x3;
		}
		else
			p = 0;
		//cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
		if(p)
		{
			if(a*c > 0)
			{
				double m1,m2,n1,n2;
				n1 = max((double)y1,(double)y2);
				n2 = max((double)y3,(double)y4);
				if(a>0)
				{
					if(a>c)
					{
						m1 = max((double)x1,(double)x2);
						m2 = max((double)x3,(double)x4);
						if(m1 >= m2)
						{
							printf("0.00\n");
							continue;
						}
					}
					else
					{
						m1 = max((double)x1,(double)x2);
						m2 = max((double)x3,(double)x4);
						if(m2 >= m1)
						{
							printf("0.00\n");
							continue;
						}
					}
				}
				else
				{
					m1 = min((double)x1,(double)x2);
					m2 = min((double)x3,(double)x4);
					if(a<c)
					{
						if(m1 <= m2)
						{
							printf("0.00\n");
							continue;
						}
					}
					else
					{
						if(m2 <= m1)
						{
							printf("0.00\n");
							continue;
						}
					}
				}
			}
			if(a!=c)
			{
				x = (d-b)/(a-c);
				y = a*x+b;
				if(y1<=y && y2<=y && y3<=y && y4<=y)
				{
					printf("0.00\n");
					continue;
				}
				if(((x>=x1 && x<=x2) || (x<=x1 && x>=x2) )&& ((x>=x3 && x<=x4) || (x<=x3 && x>=x4)))
				{
					//cout << x << ' ' << y << endl;
					double minh = 99999.0;
					if((double)y1 > y)
					{
						minh = min(minh,(double)y1-y);
					}
					if((double)y2 > y)
					{
						minh = min(minh,(double)y2-y);
					}
					if((double)y3 > y)
					{
						minh = min(minh,(double)y3-y);
					}
					if((double)y4 > y)
					{
						minh = min(minh,(double)y4-y);
					}
					double a1,a2,b1,b2;
					double yy = minh+y;
					double xa = (yy-b)/a, xb = (yy-d)/c;
					double xd = xa - xb;
					if(xd < 0)
					{
						xd = 0.0-xd;
					}
					//cout << minh << ' ' << xd << endl;
					s = 0.5*minh*xd;
				}
				else
					s = 0.0;
			}
			else
				s = 0.0;
		}
		else
		{
			if(x1-x2 == 0 && x3-x4 != 0)
			{
				x = x1;
				y = c*x+d;
				if(((x>=x3 && x<=x4) || (x<=x3 && x>=x4)) && ((y>=y1 && y<=y2) || (y<=y1 && y>=y2)))
				{
					if(c!=0)
					{
						double minhy = min(max(y1,y2),max(y3,y4));
						double xd = (minhy-d)/c - x;
						if(xd < 0)
						{
							xd = -xd;
						}
						double minh = minhy-y;
						s = 0.5*minh*xd;
					}
					else
						s = 0.0;
				}
				else
					s = 0.0;
			}
			else if(x1-x2 != 0 && x3-x4 == 0)
			{
				x = x3;
				y = a*x+b;
				if(((x>=x1 && x<=x2) || (x<=x1 && x>=x2)) && ((y>=y3 && y<=y4) || (y<=y3 && y>=y4)))
				{
					if(a!=0)
					{
						double minhy = min(max(y1,y2),max(y3,y4));
						double xd = (minhy-b)/a - x;
						if(xd < 0)
						{
							xd = -xd;
						}
						double minh = minhy-y;
						s = 0.5*minh*xd;
					}
					else
						s = 0.0;
				}
				else
					s = 0.0;
			}
			else
				s = 0.0;
		}
		printf("%.2f\n",s+ESP);
	}
	return 0;
}
