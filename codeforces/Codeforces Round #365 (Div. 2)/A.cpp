#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int a=0,b=0;
	int p,q;
	cin >> n;
	while(n--)
	{
		cin >> p >> q;
		if(p > q)
			a++;
		else if(p < q)
			b++;
		else
			continue;
	}
	if(a > b)
		cout << "Mishka";
	else if(b > a)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
		
	return 0;
}

