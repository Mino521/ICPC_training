#include <iostream>
using namespace std;
typedef long long ll;

int main ()
{
	ll n,m,p;
	cin >> n;
	ll ans = 0;
	ll a=0,b=0;
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		for(int j = 0; j < m; j++)
		{
			cin >> p; 
			if(p&1)
			{
				a++;
			}
			b+=(p/2);
		}
		if(b == 0)
		{
			ans = 1;
		}
		else if(a >= b)
		{
			ans = 3;
		}
		else
		{
			if(a)
				ans = b / a * 2 + 1;
			else
				ans = (b-a)*2;
		}
		cout << ans << endl;
		ans = 0;
		a = 0;
		b = 0; 
	}
	return 0;
}
