#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//freopen("B1. Recover Polygon.txt","r",stdin);
	int n;
	cin >> n;
	int map[n+1][n+1];
	char c;
	int x1 = 1e6, x2 = -1e6, y1 = 1e6, y2 = -1e6;
	int n1 = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
		{
			cin >> c;
			map[i][j] = c - '0';
			if(map[i][j] == 4)
			{
				x1 = min(x1,j);
				y1 = min(y1,i);
				x2 = max(x2,j);
				y2 = max(y2,i);
			}
			else if(map[i][j] == 1)
				n1++;
		}
	if(x1 == 1e6 || n1 > 4)
	{
		cout << "No";
		return 0;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i < y1-1 || i > y2+1 || j < x1-1 || j > x2+1)
				if(map[i][j] != 0)
				{
					cout << "No";
					return 0;
				}
			if((i == y1-1 || i == y2+1) && (j == x1-1 || j == x2+1))
			{
				if(map[i][j] != 1)
				{
					cout << "No";
					return 0;
				}
			}
			else if( ( (i == y1-1 || i == y2+1) && (j >= x1 && j <= x2) ) ||
						( (j == x1-1 || j == x2+1) && (i >= y1 && i <= y2) ))
			{
				if(map[i][j] != 2)
				{
					cout << "No";
					return 0;
				}	
			}
			if(i >= y1 && i <= y2 && j >= x1 && j <= x2)
				if(map[i][j] != 4)
				{
					cout << "No";
					return 0;
				}
		}
	}
	cout << "Yes";
	return 0;
}
