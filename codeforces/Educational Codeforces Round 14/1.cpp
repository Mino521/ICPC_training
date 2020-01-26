#include <iostream>
#define MAX 1000
using namespace std;

int main ()
{
	int button[MAX];
	int n;
	int sum=0;
	int count = 0;
	int p = 1;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> button[i];
	}
	if(n == 1)
	{
		if(button[0] == 1)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			if(button[i] == 0)
			{
				count ++;
			}
			if(count > 1)
			{
				p = 0;
				break;
			}
		}
		if(count == 0)
			p = 0;
		if(p)
			cout << "YES";
		else
			cout << "NO";
	}
	
	return 0;
 } 
