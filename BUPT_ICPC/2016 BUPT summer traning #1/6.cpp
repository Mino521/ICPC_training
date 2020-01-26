#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
	//int n = 5;
	int num[5];
	int a[5] = {0,0,0,0,0};
	int re = 0;
	int sum = 0;
	int r = 1;
	
	for(int i = 0; i < 5; i++)
	{
		cin >> num[i];
		sum += num[i];
		if(i == 0)
		{
			a[0] += 1;
		}
		else
		{
			for(int j = 0; j < i; j++)
			{
				if(num[i] == num [j])
				{
					a[j]++;
					r = 0;
				}
				
			}
			if(r)
				{
					a[i]++;
				}
		}
		r = 1;
	}
	for(int i = 0; i < 5; i++)
	{
		//cout << num[i] << ' ' << a[i] << endl;
		if(a[i] > 1)
		{
			if(a[i] < 4)
			{
				if(a[i]*num[i] > re)
				{
					re = a[i]* num[i];
				}
			}
			else
			{
				if(3*num[i] > re)
				{
					re = 3* num[i];
				}
			}
		}
	}
	cout << sum - re;
	
	return 0;
}

