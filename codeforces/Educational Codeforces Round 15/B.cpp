#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
map<long long, long long>m;
int main()
{
	int n;
	cin >> n;
	long long t;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> t;
		for(int j = 0; j < 32; j++)
		{
			ans+=m[(2<<j)-t];
		}
		m[t]++;
	 } 
	cout << ans;
	return 0;
}
