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
	ll i;
	ll ans;
	int n;
	cin >> n; 
	while(n--)
	{
		cin >> i;
		ans = 2*i*i-i+1;
		cout << ans << endl; 
	}
	return 0;
}

