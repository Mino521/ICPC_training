#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring> 
using namespace std;
#define MAX 100050

struct
{
	int l,r,max;
}node[3*MAX];
struct
{
	int sta,end;
}seg[MAX];
int num[MAX];
int ha[MAX];

void BuildTree (int left, int right, int u)
{
	node[u].l = left;
	node[u].r = right;
	if(left == right)
	{
		int k = left;
		node[u].max = seg[k].end - seg[k].sta + 1;
		return;
	}
	int mid = (left+right)>>1;
	BuildTree(left,mid,u<<1);
	BuildTree(mid+1,right,(u<<1)+1);
	node[u].max = max(node[u<<1].max, node[(u<<1)+1].max);
}

int query (int left, int right, int u)
{
	if(node[u].l == left && node[u].r == right)
		return node[u].max;
	if(right <= node[(u<<1)].r)
		return query(left,right,u<<1);
	if(left >= node[(u<<1)+1].l)
		return query(left,right,(u<<1)+1);
	int a = query(left,node[u<<1].r,u<<1);
	int b = query(node[(u<<1)+1].l,right,(u<<1)+1);
	return max(a,b);
}

int main ()
{
	int n,m,i;
	while(cin >> n, n)
	{
		cin >> m;
		for(i = 1; i<= n; i++)
			cin >> num[i];
		int k = 0, pre = 999999;
		for(int i = 1; i <= n; i++)
		{
			if(num[i] != pre)
			{
				pre = num[i];
				k++;
				seg[k].sta = i;
				seg[k].end = i;
			}
			else 
				seg[k].end = i;
				ha[i] = k;
		}
		BuildTree(1,k,1);
		while(m--)
		{
			int a, b, pos1, pos2;
			cin >> a >> b;
			pos1 = ha[a];
			pos2 = ha[b];
			if(pos1 == pos2)
				cout << b-a+1 <<endl;
			else
			{
				int n1 = seg[pos1].end-a+1;
				int n2 = 0;
				int n3 = b- seg[pos2].sta+1;
				if(pos2-pos1 > 1)
					n2 = query(pos1 +1, pos2-1,1);
				cout << max(n1,max(n2,n3));
			}
		}
	}
	return 0;
}
