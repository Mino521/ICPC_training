#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main ()
{
	int n, m;
	while(scanf("%d %d", &n, &m) == 2 && m && n)
	{
		int a[n], b[m];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		//cout << a[0] << ' ' << b[0] << endl;
		int cost = 0;
		int re = 0;
		int mem = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = mem; j < m; j++)
			{
				//cout << "j: " << j  << ' ' << b[j] << endl;
				if(b[j] >= a[i])
				{
					mem = j+1;
					cost += b[j];
					re++;
					//cout << a[i] << ' ' << b[j] << endl;
					//cout << b[j] << ' ' << j << endl;
					break;
				}
				//else
					//cout << "  " <<a[i] << ' ' << b[j] << endl;
			}
		}
		if(re < n)
		{
			cout << "Loowater is doomed!" << endl;
		}
		else
		{
			cout << cost << endl;
		}
		
	
	}
	
	
		return 0;
}
