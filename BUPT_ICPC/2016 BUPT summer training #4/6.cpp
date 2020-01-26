#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;

int main ()
{
	int n;
	cin >> n;
	ll odd[n];
	ll even[n];
	ll sum = 0;
	ll m;
	int a = 0, b = 0;
	for(int i = 0;i < n; i++)
	{
		cin >> m;
		if(m&1)
		{
			odd[a] = m;
			a++;
		}
		else
		{
			even[b] = m;
			b++;
			sum += m;
		}
	}
	int j;
	sort(odd,odd+a);
	if(a&1)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}
	for(;j < a;j++)
	{
		sum += odd[j];
	}
	cout << sum;
	return 0;
}
