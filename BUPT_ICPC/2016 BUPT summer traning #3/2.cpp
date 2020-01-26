#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int main ()
{
	int n;
	cin >> n;
	unsigned long long num[n],l=-1,r=-1,min,t;
	//memset(num,0,n*sizeof(num));
	string str;
	cin >> str;
	min =1;
	min<<=60;
	int p = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
		if(str[i] == 'L')
		{
			l = num [i];
			if(r != -1)
			{
				t = l-r;
				if(min > t)
				{
					min = t;
					r = 0;
					l = 0;
					p = 1;
				}
			}
		}
		if(str[i] == 'R')
		{
			r = num[i];
		}
	}
	if(p)
		cout << min/2;
	else
		cout << -1;
	
	return 0;
}

