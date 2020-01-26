#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std; 
int main()
{
	int a,b;
	char str[5];
	cin >> str;
	a = str[0]-'a' + 1;
	b = str[1]-'0';
	//cout << a << ' ' << b << endl;
	int flag1=0,flag2=0;
	if(a == 1 || a == 8)
		flag1 = 1;
	if(b == 1 || b == 8)
		flag2 = 1;
	if(flag1 && flag2)
	{
		cout << 3;
		return 0;
	}
	if(flag1 || flag2)
	{
		cout << 5;
		return 0;
	}
	cout << 8;
	return 0;
}
