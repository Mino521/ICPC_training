#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
	int n,l,r,m;
	cin >> n;
	ll a[n+1];
	map<int,int>mark;
	vector<ll>vec;
	vector<ll>ans;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	//int g;
	while(m--)
	{
		//memset(mark,0,sizeof(mark));
		cin >> l >> r;
		for(int i = l; i <= r; i++)
		{
			//g=0;
			//map<int, int>::iterator iter;  
       		//iter = mark.find(a[i]);  
       		//if(iter != mark.end())
			//   	g = 1;  
			if(i == l)
			{
				vec.push_back(a[i]);
				mark[a[i]] = 1;
				//cout << mark[a[i]] << endl;
				continue;
			}
			int s = vec.size();
			int p = 1;
			for(int j = 0; j < s; j++)
			{
				if(a[i] == vec[j])
				{
					mark[a[i]]++;
					p = 0;
					break;
				}
			}
			if(p)
			{
				vec.push_back(a[i]);
				mark[a[i]] = 1;
				//cout << mark[a[i]] << endl;
			}
		}
		int s = vec.size();
		for(int i = 0; i < s; i++)
		{
			//cout << mark[vec[i]] << ' ';
			if(mark[vec[i]]&1)
			{
				continue;
			}
			else
			{
				ans.push_back(vec[i]);
			}
		}
		//cout << endl;
		s = ans.size();
		//for(int i = 0; i < s;i++)
		//	cout << ans[i] << ' ';
		//cout << endl;
		if(s == 0)
			cout << 0 << endl;
		else if(s == 1)
			cout << ans[0] << endl;
		else
		{
			int a = ans[0];
			for(int i = 1; i < s; i++)
			{
				a = (a|ans[i]) - (a&ans[i]);
			}
			cout << a << endl;
		}
		vec.clear();
		ans.clear();
		mark.clear();
	}
	return 0;
}

