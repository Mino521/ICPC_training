#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
struct List
{
	int u,v;
	long long l;
};
int main()
{
	//freopen("B.txt","r",stdin);
	int n,m,k;
	cin >> n >> m >> k;
	if(k == 0)
	{
		cout << -1;
		return 0;
	}
	struct List list[m];
	int mark[n+1];
	int a;
	memset(mark,0,sizeof(mark));
	for(int i = 0; i < m; i++)
	{
		scanf("%d %d %I64d",&list[i].u, &list[i].v, &list[i].l);
	}
	for(int i = 0; i < k; i++)
	{
		cin >> a;
		mark[a]++;
	}
	long long mina = 2e9;
	for(int i = 0; i < m; i++)
	{
		if((mark[list[i].u] != 0 && mark[list[i].v] == 0) || (mark[list[i].v] != 0 && mark[list[i].u] == 0))
		{
			mina = min(mina,list[i].l);
		}
	}
	if(mina == 2e9)
	{
		cout << -1;
		return 0;
	}
	cout << mina;
	return 0;
}
