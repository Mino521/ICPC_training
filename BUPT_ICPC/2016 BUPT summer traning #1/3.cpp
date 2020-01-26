#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;

int main ()
{
	int n;
	
	cin >> n;
	
	int a[n];
	int p;
	int num;
	int sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> p;
	num = 1;
	for(int i = n; i > 1; i--)
	{
		num *= i;
	}
	//cout << num << endl;
	do
	{
		int i = 0;
		int summ = 0;
		int j;
		for(j = 0; j < n; j++)
		{
			summ += a[j];
			if(summ > p)
				break;
		}
		sum += j;
		i++;
		if(i >= num)
			break;
	}while( next_permutation(a,a+n) );
	
	double res;
	
	res = (double)sum/num;
	cout<<setiosflags(ios::fixed)<<setprecision(10) << res <<endl;
	
	return 0;
}

