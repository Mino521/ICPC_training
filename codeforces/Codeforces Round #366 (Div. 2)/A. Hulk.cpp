#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

void solve(int n)
{
	int flag = 0;
	if(n%2 == 1)
		flag = 1;
	int m = n;
	for(int i = 1; i <= m;i++)
	{
		if(i&1 && n != 1)
			cout << "I hate that ";
		else if(n == 1)
		{
			if(flag == 1)
				cout << "I hate it\n";
			else
				cout << "I love it\n";
		}
		else
			cout << "I love that ";
		n--;
	}
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		solve(n);
	}
	return 0;
}
