#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main ()
{
	long long x1,y1,x2,y2;
	long long area;
	int ny,nx;
	cin >> x1 >> y1 >> x2 >> y2;
	ny = y2-y1+1;
	nx = (x2-x1+1)/2;
	area = nx*ny;
	if((x2-x1+1) & 1)
	{
		if(x1 & 1 && x2 & 1)
			area += (y2-y1+2)/2;
		else if(x1&1 || x2&1)
			area += (y2-y1+1)/2;
		else
			area += (y2-y1+2)/2;
	}
	cout << area;
	
	return 0;
}
