#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
int Next[400010];
char S[400010];
void get_next()
{
	Next[0] = -1;
	int i = 0, j = -1;
	int len = strlen(S);
	while(i < len)
	{
		if(j == -1 || S[i] == S[j])
		{
			i++;
			j++;
			Next[i] = j;
		}
		else
			j = Next[j];
	}
}
void output_next()
{
	int len = strlen(S);
	for(int i = 0; i <= len; i++)
		cout << Next[i] << ' ';
	cout << endl;
}
int main()
{
	//freopen("input.txt","r",stdin);
	while(~scanf("%s",S))
	{
		get_next();
		//output_next();
		int len = strlen(S);
		int res[len+1];
		int num = 0;
		int j = len;
		while(Next[j] != 0)
		{
			res[num++] = Next[j];
			j = Next[j];
		}
		//if(S[0] == S[len-1])
		//	cout << 1 << ' ';
		for(int i = num-1; i >= 0; i--)
		{
			cout << res[i] << ' ';
		}
		printf("%d\n",len);
	}
	return 0;
}
