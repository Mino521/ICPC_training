#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100010;

int main()
{
	//freopen("B. Interesting drink.txt","r",stdin);
	int x[maxn];
	int n, q, m;
	cin >> n;
	for(int i = 0 ; i < n; i++)
		scanf("%d",&x[i]);
	sort(x,x+n);
	cin >> q;
	for(int i = 0 ; i < q; i++)
	{
		scanf("%d",&m);
		int ans = upper_bound(x,x+n,m) - x;
		cout << ans << endl;
	}
	return 0;
}
