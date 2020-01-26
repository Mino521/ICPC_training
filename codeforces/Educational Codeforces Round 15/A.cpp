#include <cstdio>
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	//sort(num,num+n);
	int ans = 0, count = 1;
	for(int i = 1; i < n; i++)
	{
		if(num[i] > num[i-1])
		{
			count++;
		}
		else
		{
			ans = max(ans,count);
			count = 1;
		}
	}
	ans = max(ans,count);
	cout << ans;
	return 0;
}
