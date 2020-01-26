#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxs = 1000010;
int Next[maxs];
char s[maxs];
int N;
void get_next()
{
	int i = 0, j = -1;
	Next[0] = -1;
	while(i < N)
	{
		if(j == -1 || s[i] == s[j])
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
	int len = strlen(s);
	for(int i = 0; i <= len; i++)
		printf("%d ",Next[i]);
	printf("\n");
}
int main()
{
	freopen("poj1961.txt","r",stdin);
	int k = 0;
	while(~scanf("%d",&N) && N != 0)
	{
		scanf("%s",s);
		k++;
		get_next();
		output_next();
		cout << "Test case #" << k << endl;
		for(int i = 1; i <= N; i++)
		{
			if(Next[i] != 0 && i%(i-Next[i]) == 0)
				cout << i << ' ' << i/(i-Next[i]) << endl;
		}
		cout << endl;
	}
}
