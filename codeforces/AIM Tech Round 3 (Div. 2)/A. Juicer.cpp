#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int b,d,cntd,flagd,n;
	cin >> n >> b >> d;
	int a;
	cntd = 0;
	flagd = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		if(a > b)
			continue;
		cntd += a;
		if(cntd > d)
		{
			cntd = 0;
			flagd ++;
		}
	}
	cout << flagd;
	return 0;
}