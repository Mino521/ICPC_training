#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main ()
{
	long long n;
	long long i;
	while(cin >> n, n)
	{
		long long sum = 1;
    	for(long long i = 2; i*i <= n; i++)
		{
       	int k = 0;
        	while(n%i == 0) 
			{
        	    n /= i;
        	    k++;
        	}
        	if(k) 
				sum *= ((long long)pow((double) i,k-1))*(i-1);
    	}
    	if(n>1) 
			sum *= (n-1);
		cout << sum <<endl;
	}
	return 0;
}
