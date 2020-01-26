#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int main ()
{
	int n, m;
	int p = 0;
	cin >> n >> m;
	char map[n][m];
	int x[n];
	int y[m];
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	for(int i = 0; i < n; i++)
	{
		for(int j =  0; j < m; j++)
		{
			cin >> map[i][j];
			if(map[i][j] == '*')
			{
				p++;
			 	x[i]++;
			 	y[j]++;
			}
		}
	}
	int sum;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			sum = x[i] + y[j];
			if(map[i][j] == '*')
			{
				sum--;
			}
			//cout << sum << ' ' << p <<endl;
		    if(sum == p)
		    {
			   cout<< "YES" << endl;
			   cout << i+1 << " " << j+1;
			   return 0;
		    }
		}
	}	   
	cout<<"NO";
	return 0;
}

