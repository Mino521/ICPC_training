#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int maxn = 1000010;
char str[maxn];
int Next[maxn];
int len;
void get_next()
{
	int j = 0;
	int i = 1;
	Next[1] = 0;
	while(i < len)
	{
		if(str[i] == str[j] || j == 0)
		{
			i++;
			j++;
			if(str[i] != str[j])
				Next[i] = j;
			else
				Next[i] = Next[j];
		}
		else
			j = Next[j];
	}
}

int main()
{
	while(~scanf("%s",str))
	{
		if(str[0] == '.')
			break;
		len =strlen(str);
		get_next();
		int ans = 1;
		if(len%(len-Next[len]) == 0)
			ans = len/(len-Next[len]);
		for(int g = 0; g <= len; g++)
		{
			cout << Next[g] << ' ';
		}
		cout << endl;
		cout << ans << endl;
	}
	return 0;
}

