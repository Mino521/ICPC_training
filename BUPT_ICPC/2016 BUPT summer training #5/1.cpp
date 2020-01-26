#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int size = 110;
const int Max = 1e9+7;
int a[size][size];

int solve(int n)
{
	int sum = 0;
	int i,j,k;
	int time = 1;
	int low[size];
	bool flag[size];
	flag[0] = true;
	for(i = 1; i < n;i++)
	{
		low[i] = a[0][i];
		flag[i] = false;
	}
	while(time < n)
	{
		int min = Max;
		j = 0;
		for(k = 1; k < n; k++)
		{
			if(low[k] < min && flag[k] == false)
			{
				min = low[k];
				j = k;
			}
		}
		sum += min;
		flag[j] = true;
		for(k = 1; k < n; k++)
		{
			if(a[j][k] < low[k] && flag[k] == false)
			{
				low[k] = a[j][k];
			}
		}
		time++;
	}
	return sum;
}

int main()
{
	int n;
	while(cin >> n)
	{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << solve(n) << endl;
	}
	return 0;
} 
