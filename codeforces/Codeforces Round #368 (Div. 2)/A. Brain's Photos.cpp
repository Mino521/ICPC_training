#include <iostream>
using namespace std;
int main()
{
	int n,m;
	char c;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> c;
			if(c == 'C' || c == 'Y' || c == 'M')
			{
				cout << "#Color";
				return 0;
			}
		}
	}
	cout << "#Black&White";
	return 0;
}
