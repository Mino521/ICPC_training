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
	char str[1000];
	ll i,len;
	ll n = 0,ans = 0;
	while(~scanf("%s",str))
	{
		len = strlen(str);
		if(len>10)
		{
			i = 0;
		}
		else
		{
			i = 1;
			for(int j = 0; str[j] && j < 11; j++)
				n = n*10 + str[j]-'0';
			//cout << n << endl;
			while(n != 1)
			{
				n = (long long)sqrt((double)n);
				ans++;
				if(ans > 5)
					break;
			}
		}
		n = 0;
		//cout << i << ' ' << ans << endl;
		if(i && ans <= 5)
			cout << ans << endl;
		else
			cout << "TAT\n";
		ans = 0;
		i = 0;
	}
	return 0;
}
