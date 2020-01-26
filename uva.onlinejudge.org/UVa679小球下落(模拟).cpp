#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define maxd 20
int s[1<<20];
int main()
{
	int D,I,N;
	cin >> N;
	while(N--)
	{
		cin >> D >> I;
		int k = 1;
		for(int i = 0; i < D-1; i++)
		{
			if(I%2)
			{
				k = k<<1;
				I = (I+1)/2;
			}
			else
			{
				k = (k<<1) + 1;
				I = I/2;
			}
		 } 
		cout << k <<endl;
	}
	return 0;
} 
