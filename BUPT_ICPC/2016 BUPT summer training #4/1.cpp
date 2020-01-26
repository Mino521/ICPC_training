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
	char ch;
	cin >> n;
	ll map[n][2];
	memset(map,0,sizeof(map));
	for(int i = 1; i <= n; i++)
	{
		cin >> ch;
		if(ch == '<')
		{
			map[i][0] = -1;
		}
		else
		{
			map[i][0] = 1;
		}
	}
	ll pos = 1;
	for(int i = 1; i <= n; i++)
	{
		int m;
		cin >> m;
		map[i][0] *= m;
		//cout << map[i][0] << ' ';
	}
	for(map[1][1]=1;;)
	{
		pos += map[pos][0];
		//cout << pos << ' ' << map[pos][1] << endl;
		if(pos < 1 || pos > n)
		{
			cout << "FINITE";
			break;
		}
		else if(map[pos][1])
		{
			cout << "INFINITE";
			break;
		}
		map[pos][1]++;
	}
	return 0;
}
