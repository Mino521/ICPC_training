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
		scanf("%d %d",&D,&I);
		memset(s,0,sizeof(s));
		int k;
		for(int i = 0; i < I; i++)
		{
			k = 1;
			for(int j = 0; j < D; j++)
			{
				if(s[k])
				{
					//cout << k << endl; 
					s[k] = 0;
					k = (k<<1) + 1;
				}
				else
				{
					//cout << k << endl; 
					s[k] = 1;
					k = k<<1;
				}
			}
		}
		cout << k/2 << endl;
	}
	return 0;
 } 
