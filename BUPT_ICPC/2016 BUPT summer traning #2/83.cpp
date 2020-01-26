#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	long long x1,y1,x2,y2;
	long long area;
	cin >> x1 >> y1 >> x2 >> y2;
	if((y2-y1)%2 == 0)
	{
		area = ((y2-y1)/2+1) * ((x2-x1)/2+1) + ((y2-y1)/2) * ((x2-x1)/2);
	}
	else
		area = ((y2-y1+1)/2) * (x2-x1+1);
	cout << area;
	
	return 0;
 } 
