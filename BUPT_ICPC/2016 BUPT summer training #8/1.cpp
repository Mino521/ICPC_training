#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	int a[60],b[60],c[60],d[60];
	int year;
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	a[4] = 1;
	a[5] = 2;
	
	b[1] = 0;
	b[2] = 0;
	b[3] = 1;
	b[4] = 1;
	b[5] = 1;
	
	c[1] = 0;
	c[2] = 0;
	c[3] = 0;
	c[4] = 1;
	c[5] = 1;
	
	d[1] = 0;
	d[2] = 1;
	d[3] = 1;
	d[4] = 1;
	d[5] = 2;
	
	for(int i = 6;i < 56;i++)
	{
		a[i] = a[i-1] + c[i-1];
		b[i] = d[i-1];
		c[i] = b[i-1];
		d[i] = a[i];
	}
	while(cin >> year, year)
	{
		//cout << a[year]<<' '<<b[year]<<' '<<c[year]<< ' '<<d[year] << endl;
		cout << a[year]+b[year]+c[year]+d[year] << endl;
	}
	return 0;
}

