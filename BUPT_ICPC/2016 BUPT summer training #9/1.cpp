#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm> 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	int T,N;
	cin >> T;
	while(T--)
	{
		cin >> N;
		ll a[N+1];
		int maxan = 0;
		int ans;
		for(int i = 1; i <= N; i++)
			cin >> a[i];
		for(int i = 1; i <= N; i++)
		{
			ans = 0;
			for(int j = i,k = 0;k <= N/2; j+=2)
			{
				if(j > N)
					j -= N;
				ans+=a[j];
				k++;
			}
			//cout << ans <<endl;
			maxan = max(maxan,ans);
		}
		cout << maxan << endl;
	}
	return 0;
}

