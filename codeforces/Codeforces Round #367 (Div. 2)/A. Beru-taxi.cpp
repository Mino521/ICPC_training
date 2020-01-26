#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 1010;
int main()
{
	freopen("A. Beru-taxi.txt","r",stdin);
	int a,b;
	cin >> a >> b;
	int n;
	cin >> n;
	int x[n+1],y[n+1],v[n+1];
	double ans,mina = 10000000000.0;
	for(int i = 1; i <= n; i++)
	{	
		cin >> x[i] >> y[i] >> v[i];
		ans = sqrt( (double) ( (x[i]-a)*(x[i]-a) + (y[i]-b)*(y[i]-b) ) ) / (double)v[i];
		//cout << ans << endl;
		mina = min(mina,ans); 
	}
	printf("%.10lf",mina);
	return 0;
}
