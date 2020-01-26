#include <iostream>

using namespace std;

int main ()
{
	long long x1,y1,x2,y2;
	long long area = 0;
	int ny,nx;
	cin >> x1 >> y1 >> x2 >> y2;
	ny = y2-y1+1;
	nx = (x2-x1+1)/2;
	area = nx*ny;
	area += (y2-y1+2)/2;
	cout << area;
	
	return 0;
}
