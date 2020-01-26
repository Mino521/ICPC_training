#include <iostream>

using namespace std;

int main()
{
	int n, h;
	int i, res;
	
	cin >> n;
	cin >> h;
	
	int a[n];
	
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for(i = 0, res = 0; i < n; i++)
	{
		if(a[i] > h)
			res += 2;
		else
			res++;
	}
	cout << res << endl;
	
	return 0;
} 

