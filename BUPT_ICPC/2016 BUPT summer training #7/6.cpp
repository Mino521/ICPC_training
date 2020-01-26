#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define MAX 1005

int n;
int c[MAX];
double ans;
void solve()
{
    for(int i=1;i<=n;i++)
        cin >> c[i];
    if(n==1)
	{
        ans = c[1];
        return;
    }
    if(n==2)
	{
        ans = (c[1]+c[2])/2.0;
        return;
    }
    ans = 0;
    for(int i=2;i<n;i++)
        ans += (c[i])/3.0;
    ans+=c[1]/2.0;
    ans+=c[n]/2.0;
}
int main()
{
    while(~scanf("%d",&n))
	{
		solve();
		printf("%.6f\n",ans);
	}
    return 0;
}
