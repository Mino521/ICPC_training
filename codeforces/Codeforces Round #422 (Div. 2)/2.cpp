#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main(void)
{
	//freopen("test.txt", "r", stdin);
	int a,b;
	cin >> a >> b;
	char s[a+1], t[b+1];
	cin >> s;
	cin >> t;
	int c = b-a;
	int min = 0;
	long long minnum = 1000000000;
	for(int i = 0; i < c+1; i++)
	{
		long long num = 0;
		for(int j = 0; j < a; j++)
			if(s[j] != t[i+j])
				num++;
		if(num < minnum)
		{
			minnum = num;
			min = i+1;
		}
	}
	cout << minnum << endl;
	for(int i = 0; i < a; i++)
		if(s[i] != t[i+min-1])
			cout << i+1 << ' ';
		
	return 0;
}
