#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	int map[300010][2];
	int map2[300010];
	int sum=0;
	int t,x;
	memset(map,0,sizeof(map));
	memset(map2,0,sizeof(map2));
	for(int i = 0; i < q; i++)
	{
		cin >> t >> x;
		if(t == 1)
		{
			map[i][0]++;
			map2[i] = x;
			sum++;
		}
		else if(t == 2)
		{
			for(int j = 0; j <= i; j++)
			{
				if(map2[j] == x && map[j][1] == 0)
				{
					sum--;// map[j][x];
					//map[j][x] = 0;
					map[j][1] = 1;
				}
			}
		}
		else
		{
			for(int j = 0, k = 0; k < x && j <= i; j++)
			{
					if(map[j][0])
					{
						k++;
						if(map[j][1] == 0)
						{
							map[j][1] = 1;
							sum--;
						}
					}
			}
		}
		cout << sum << endl;
	}
	return 0;
}
