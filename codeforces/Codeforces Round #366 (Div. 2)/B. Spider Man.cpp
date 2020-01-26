#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int sum[n];
	cin >> a[0];
	sum[0] = a[0] - 1;
	for(int i = 1; i < n; i++)
	{
		cin >> a[i];
		sum[i] = sum[i-1]+a[i]-1;
	}
	for(int i = 0; i < n; i++)
	{
		if(sum[i] & 1)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
	return 0;
}
