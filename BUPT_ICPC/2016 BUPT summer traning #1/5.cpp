#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;

int main ()
{
	int T;
	int N;
	
	cin >> T;
	double res[T];
	int sum[T];
	int ac[T];
	int he;
	for(int i = 0; i < T; i++)
	{
		cin >> N;
		int a[N];
		for(int i =0; i < N; i++)
		{
			cin >> a[i];
		}
		sort(a,a+N);
		sum[i]=1;
		for(int j=N, k = 0;k<3;j--, k++)
			sum[i] *= j;
		sum[i] = sum[i] / 6;
		ac[i]=0;
		for(int j=0;j < N-2;j++)
		{
			for(int k=j+1;k<N-1;k++)
			{
				he = a[j]+a[k];
				for(int m=k+1;m<N;m++)
				{
					if(he > a[m])
					{
						ac[i]++;
						//cout << a[j] << ' ' << a[k] << ' ' << a[m] << endl;
					}
					else
						break;
				}
			}
		}
		//cout << sum[i] << endl;
		res[i] = (double)ac[i]/sum[i];
	}
	for(int i = 0; i< T; i++)
	{
		cout<<setiosflags(ios::fixed)<<setprecision(7) << res[i] <<endl;
	}
	return 0;
}

