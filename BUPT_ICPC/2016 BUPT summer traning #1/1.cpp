#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
	int T;
	long long N;
	long long sumx,sumy;
	long long avex,avey;
	long long dx, dy;
	long long res;
	
	cin >> T;
	
	for(int i = 0;i < T; i++)
	{
		cin >> N;
		int x[N],y[N];
		sumx = 0;
		sumy = 0;
		for(int i = 0; i < N; i++)
		{
			cin >> x[i] >> y[i];
			sumx += x[i];
			sumy += y[i];
		}
		avex = (sumx+N/2)/N;
		avey = (sumy+N/2)/N;
		dx = 0;
		dy = 0;
		for(int i = 0; i < T; i++)
		{
			dx += abs(x[i]-avex);
			dy += abs(y[i]-avey);
		}
		res = dx + dy;
		cout << res;
	}
	
	
	return 0;
}

