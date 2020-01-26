#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	char a[1000005];
	char b[1000005];
	cin >> a;
	cin >> b;
	int lena,lenb;
	int i,j;
	for(i = 0; a[i] == '0'; i++);
	for(j = 0; b[j] == '0'; j++);
	lena = strlen(a)-i;
	lenb = strlen(b)-j;
	if(lena == 0 && lenb == 0)
	{
		cout << '=';
		return 0;
	}
	else if(lena > lenb)
		cout << '>';
	else if(lena < lenb)
		cout << '<';
	else
	{
		int count = 0;
		int k = strlen(a);
		for(int m = i, n = j;m < k; m++, n++)
		{
			int p = a[m] - '0';
			int q = b[n] - '0';
			if(p == q)
			{
				count = 1;
				continue;
			}
			else if(p > q)
			{
				count = 0;
				cout << '>';
				break;
			}
			else
			{
				count = 0;
				cout << '<';
				break;
			}
		}
		if(count)
		{
			cout << '=';
		}
	}
	
	return 0;
}
