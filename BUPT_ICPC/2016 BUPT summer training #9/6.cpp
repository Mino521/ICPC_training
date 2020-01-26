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
	ll n;
	cin >> n;
	ll a = n/7+1;
	ll x=0,y=0;
	ll b = n%7;
	switch(b)
	{
		case 0 :
			if(a == 1)
				x = 2*(a-1);
			else
			{
				x = 2*a-1;
				y = 2;
			}
			break;
		case 1:
			x=a;
			y=2*a;
			break;
		case 2:
			x = -a;
			y = 2*a;
			break;
		case 3:
			x = -2*a;
			break;
		case 4:
			x = -a;
			y = 1 - 2*a;
			break;
		case 5:
			x = a;
			y = -2*a;			
			break;
		case 6:
			x = 2*(a-1);
			break;
	}
	cout << x << ' ' << y;
	return 0;
}

