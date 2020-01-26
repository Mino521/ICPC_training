#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm> 
using namespace std;

struct travel
{
	int a,b,cost;
};

bool cmp1(const travel &st1, const travel &st2)
{
	return st1.a < st2.a;
}

bool cmp2(const travel &st1, const travel &st2)
{
	return st1.b < st2.b;
}

int main (void)
{
	//freopen("test.txt", "r", stdin);
	int num, maxcost;
	cin >> num >> maxcost;
	struct travel copy1[num];
	struct travel copy2[num];
	for(int i = 0; i < num; i++)
	{
		int q,w,e;
		cin >> q >> w >> e;
		copy1[i].a = q;
		copy1[i].b = w;
		copy1[i].cost = e;
	}
	memcpy(copy2, copy1, sizeof(copy1));
	sort(copy1, copy1+num, cmp1);
	sort(copy2, copy2+num, cmp2);

	int res = -1;
	int mincost[200005];
	int j = 0; 
	for(int i = 0; i < 200005; i++)
		mincost[i] = -1;
	for(int i = 0; i < num; i ++)
	{
		for(; j < num && copy1[i].a > copy2[j].b;)
		{
			if(mincost[copy2[j].b-copy2[j].a+1] < 0 || copy2[j].cost < mincost[copy2[j].b-copy2[j].a+1]);
				mincost[copy2[j].b-copy2[j].a+1] = copy2[j].cost;
			//cout << j << ' ' << i << endl;
			j++;
		}
		int k = maxcost - (copy1[i].b - copy1[i].a + 1);
		//cout << ' ' << mincost[k] << ' ' << copy1[i].cost << endl;
		if(k > 0 && (mincost[k] != -1 &&(res < 0 || res > mincost[k] + copy1[i].cost)))
		{
			res = mincost[k] + copy1[i].cost;
			//cout << i << endl;
		}
	}
	cout << res;

	return 0;
}

