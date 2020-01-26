#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100010];
	cin >> str;
	int flag = 1;
	int flaga = 0;
	int len = strlen(str);
	for(int i = 0; i < len-1; i++)
	{
		if(str[i] != 'a')
		{
			flag = 0;
			str[i] -= 1;
		}
		if(flag == 0)
		{
			if(str[i+1] == 'a')
			{
				flaga = 1;
				//printf("1\n");
				break;
			}
		}
	}
	if(flag)
	{
		if(str[len-1] == 'a')
		{
			str[len-1] = 'z';
		}
		else
			str[len-1] -= 1;
	}
	else
	{
		if(str[len-1] != 'a')
		{
			if(flaga == 0)
			str[len-1] -= 1;
		}
	}
	cout << str;
	return 0;
}