#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
#define MAX 410

struct line
{
	double l;
	double r;
	double h;
	int f;
	line(){}
	line(double a,double b, double c, int d):l(a),r(b),h(c),f(d){}
}a[MAX];

double sum[MAX<<1],has[MAX/2];
map<double,int>m;
int cov[MAX<<1];

void push_up(int l, int r, int rt)
{
	if(cov[rt])
		sum[rt] = has[r+1] - has[l];
	else if(l == r)
		sum[rt] = 0;
	else
		sum[rt] = sum[rt<<1] + sum[rt<<1|1];
}

void update(int c, int L, int R, int l, int r, int rt)
{
	if(L <= l && R >= r)
	{
		cov[rt] += c;
		push_up(l,r,rt);
		return;
	}
	int mid = r+l >> 1;
	if(L <= mid)
		update(c,L,R,l,mid,rt<<1);
	if(R > mid)
		update(c,L,R,mid+1,r,rt<<1|1);
	push_up(l,r,rt);
}

int cmp(const line &a, const line &b)
{
	return a.h < b.h;
}

int main ()
{
	int n;
	double x1,x2,y1,y2;
	int cas = 1;
	while(cin >> n, n)
	{
		int cnt = 0;
		int flag = 0;
		double ans = 0;
		int k = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			a[cnt++] = line(x1,x2,y1,1);
			a[cnt++] = line(x1,x2,y2,-1);
			if(m[x1] == 0)
				m[x1] = ++flag;
			if(m[x2] == 0)
				m[x2] = ++flag;
		}
		map<double,int>::iterator iter;
		for(iter = m.begin(); iter != m.end(); iter++)
		{
			has[++k] = iter->first;
			iter->second = k;
		}
		sort(a,a+cnt,cmp);
		memset(sum,0,sizeof(sum));
		memset(cov,0,sizeof(cov));
		for(int i = 0; i < cnt-1; i++)
		{
			int l = m[a[i].l];
			int r = m[a[i].r]-1;
			update(a[i].f,l,r,1,flag,1);
			ans += (a[i+1].h-a[i].h)*sum[1];
		}
		cout << "Test case #" << cas++ << endl;
		printf("Total explored area: %.2lf\n\n",ans);
	}
	return 0;
}
