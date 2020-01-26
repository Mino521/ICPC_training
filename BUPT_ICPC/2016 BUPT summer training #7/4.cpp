#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	ll n;
	cin >> n;
	for(int i = 1; n > i; i++)
	{
		n-=i;
	}
	cout << n;
	return 0;
}
