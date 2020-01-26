#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define maxn 5010
typedef long long ll;
using namespace std;
ll n,s,e,x[maxn],a[maxn],b[maxn],c[maxn],d[maxn];
ll sum = 0;
ll Next[maxn];
//int mark[maxn];
ll distance(ll m, ll n)
{
	if(x[m] > x[n])
		return x[m] - x[n] + c[m] + b[n];
	return x[n] - x[m] + d[m] + a[n];
}
int main()
{
	//freopen("4.txt","r",stdin);
	cin >> n >> s >> e;
	//memset(mark,0,sizeof(mark));
	for(ll i = 1; i <= n; i++)
		cin >> x[i];
	for(ll i = 1; i <= n; i++)
		cin >> a[i];
	for(ll i = 1; i <= n; i++)
		cin >> b[i];
	for(ll i = 1; i <= n; i++)
		cin >> c[i];
	for(ll i = 1; i <= n; i++)
		cin >> d[i];
	sum = distance(s,e);
	//mark[s] = 1;
	//mark[e] = 1;
	Next[s] = e;
	ll maxm,best;
	for(ll i = 1; i <= n; i++)
	{
		if(i == s || i == e)
			continue;
		maxm = 1000000000000000;
		for(ll j = s; j != e; j = Next[j])
		{
			ll k = distance(j,i) + distance(i,Next[j]) - distance(j,Next[j]);
			if(k < maxm)
			{
				maxm = k;
				best = j;
			}
		}
		//cout << maxm << endl;
		sum += maxm;
		Next[i] = Next[best];
		Next[best] = i;
		//mark[i] = 1;
	}
	cout << sum;
	return 0;
}