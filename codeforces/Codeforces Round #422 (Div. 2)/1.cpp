#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
 
int main(void)
{
	//freopen("test.txt", "r", stdin);
	int a,b;
	long long min;
	cin >> a >> b;
	if(a > b)
		min = b;
	else
		min = a;
	long long result = 1;
	for(int i = min; i > 1; i--)
		result *= i;

	cout << result;

	return 0;
}
