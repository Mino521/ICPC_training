#include <stdio.h>

int main (void)
{
	int sum = 0;
	int n,k;
	int a,b;
	int index = 1;
	int i;
	
	scanf("%d %d", &n, &k);
	
	int num[n][n];
	
	for(a=0;a<n;a++)
	{
		for(b=0;b<k-1;b++)
			num[a][b]=index++;
	}
	for(a=0;a<n;a++)
	{
		for(b=k-1;b<n;b++)
			num[a][b]=index++;
	}
	for(i=0;i<n;i++)
		sum += num[i][k-1];
	printf("%d\n", sum);
	for(a=0;a<n;a++)
	{
		for(b=0;b<n;b++)
		{
			printf("%d ",num[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}
