#include <iostream>
using namespace std;
int main()
{
	int n,ans;
	cin >> n;
	if(n&1)
		ans = (n>>1);
	else
	{
		int m=2;
		while(m <= n)
			m <<= 1;
		m >>= 1;
		ans = (n-m)/2;
	}
	cout << ans;
	return 0;
}
