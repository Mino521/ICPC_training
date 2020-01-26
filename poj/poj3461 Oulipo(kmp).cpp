#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
char w[10010],t[1000010];
int Next[10010];
void get_next()
{
	int i;
	int j;
	Next[0] = -1;
	for(i = 0, j = -1; w[i];)
	{
		if(j == -1 || w[i] == w[j])
		{
			i++;
			j++;
			if(w[i] != w[j])
				Next[i] = j;
			else
				Next[i] = Next[j];
		}
		else
		{
			j = Next[j];
		}
	}
	//for(int i = 0; i < strlen(w); i++)
	//	cout << next[i] << ' ';
	//cout << endl;
	//system("pause");
}
int kmp()
{
	int i = 0;
	int j = 0;
	int len = strlen(w);
	int len2 = strlen(t);
	int ans = 0;
	while(i < len2 && j < len)
	{
		if(j == -1 || t[i] == w[j])
		{
			i++;
			j++;
		}
		else
			j = Next[j];
		if(j >= len)
		{
			ans++;
			j = Next[j];
		}
	}
	return ans;
}
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		
		int cnt = 0;
		cin >> w;
		cin >> t;
		get_next();
		int ans = kmp();
		cout << ans << endl;
	}
	return 0;
}
