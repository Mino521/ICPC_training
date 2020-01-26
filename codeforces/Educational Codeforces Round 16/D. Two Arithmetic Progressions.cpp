#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a1,b1,a2,b2,l,r;
	cin >> a1 >> b1 >> a2 >> b2 >> l >> r;
	vector<int> ans1;
	int ans = 0;
	int n;
	if(l-b1 < 0)
		n = 0;
	else
	{
		n = (l-b1)/a1;
		if((l-b1)%a1 != 0)
			n++;
	}
	int n2;
	if(l-b2 < 0)
		n2 = 0;
	else
	{
		n2 = (l-b2)/a2;
		if((l-b2)%a2 != 0)
			n2++;
	}
	if(a1 == 1)
	{
		int mi = n*a1+b1;
		int cnt = 0;
		int j = n2;
		while(1)
		{
			int mm = j * a2 + b2;
			if(mm > r)
				break;
			if(mm >= mi)
				cnt++;
			j++;
		}
	}
	if(a2 == 1)
	{
		int mi = n*a2+b2;
		int cnt = 0;
		int j = n;
		while(1)
		{
			int mm = j * a1 + b1;
			if(mm > r)
				break;
			if(mm >= mi)
				cnt++;
			j++;
		}
	}
	for(int i = n;; i++)
	{
		int m = a1*i+b1;
		if(m > r)
			break;
		ans1.push_back(m);
	}
	int k = ans1.size();
	for(int i = 0, j = n2; i < k; j++)
	{
		int m = a2*j+b2;
		while(1)
		{
			if(ans1[i] > m)
				break;
			if(ans1[i] == m)
			{
				ans++;
				i++;
				break;
			}
			i++;
			if(i >= k)
				break;
		}
	}
	cout << ans;
	return 0;
}
