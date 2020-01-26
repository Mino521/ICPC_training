#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main ()
{
	long long n;
	long long m;
	cin >> n >> m;
	long long sum = n*n;
	//cout << sum << endl;
	int a[n+1],b[n+1];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int rook[m+1][2];
	int d = 2*n-1;
	int p=1,q=1;
	for(int i = 1; i <= m; i++)
	{
		cin >> rook[i][0] >> rook[i][1];
		if(i == 1)
		{
			a[rook[i][0]]++;
			b[rook[i][1]]++;
			sum -= d;
			cout << sum << ' ';
			continue;
		}
		sum -= d;
		if(a[rook[i][0]] && b[rook[i][1]])
		{
			sum += d;
			a[rook[i][0]]++;
			b[rook[i][1]]++;
			cout << sum << ' ';
			continue;
		}
		else if(a[rook[i][0]] && b[rook[i][1]] == 0)
		{
			sum += n;
			sum += (p-1);
			q++;
			a[rook[i][0]]++;
			b[rook[i][1]]++;
		}
		else if(a[rook[i][0]] == 0 && b[rook[i][1]])
		{
			sum += n;
			sum += (q-1);
			p++;
			a[rook[i][0]]++;
			b[rook[i][1]]++;
		}
		else
		{
			sum += p;
			sum += q;
			p++;
			q++;
			a[rook[i][0]]++;
			b[rook[i][1]]++;
		}
		cout << sum << ' ';
	}
	return 0;
}
