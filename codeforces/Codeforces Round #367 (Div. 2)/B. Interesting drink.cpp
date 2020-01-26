#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100010;
typedef long long ll;
ll m[maxn],x[maxn];
int n, q;
int eq(int n, int p)
{
	int ans = 0;
	while(1)
	{
		if(x[n++] == p)
			ans++;
		else
			break;
	 } 
	return ans;
}
int find(int l, int r, ll p)
{
	if(l >= r)
	{
		if(x[l] <= p)
			return l+1;
		return l;
	}
	int mid = (l+r)/2;
	if(x[mid] == p)
		return mid+eq(mid+1,p)+1;
	if(x[mid] < p)
	{
		l = mid+1;
		return find(l,r,p);
	} 
	else
	{
		r = mid;
		return find(l,r,p);
	}
}
int main()
{
	//freopen("B. Interesting drink.txt","r",stdin);
	cin >> n;
	for(int i = 0 ; i < n; i++)
		scanf("%d",&x[i]);
	//for(int i = 0 ; i < n; i++)
	//	printf("%d ",x[i]);
	sort(x,x+n);
	cin >> q;
	for(int i = 0 ; i < q; i++)
	{
		scanf("%d",&m[i]);
		//printf("%d\n",m[i]);
		int ans = find(0,n-1,m[i]);
		cout << ans << endl;
	}
	return 0;
}
