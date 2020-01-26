#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[210][210];

int main ()
{
	int T;
	cin >> T;
	memset(a,0,sizeof(a));
	for(int i = 0; i < 201; i++)
	{
		if(i == 1)
		{
			a[i][1] = 1;
		}
		else if(i == 2)
		{
			a[i][1] = -1;
		}
		else if(i == 3)
		{
			a[i][1] = 1;
			a[i][2] = 2;
			a[i][3] = 3;
		}
		else if(i == 4)
		{
			a[i][1] = 1;
			a[i][2] = 2;
			a[i][3] = 6;
			a[i][4] = 9;
		}
		else
		{
			a[i][1] = a[i-1][1];
			a[i][2] = a[i-1][2];
			for(int j = 3; j < i; j++)
			{
				a[i][j] = 2*a[i-1][j];
			}
			a[i][i] = 3;
		}
	}
	int n;
	for(int i = 0; i < T; i++)
	{
		cin >> n;
		for(int j = 1; j <= n; j++)
			cout << a[n][j] << endl;
	}
	return 0;
}
 
