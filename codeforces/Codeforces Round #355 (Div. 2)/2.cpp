#include <iostream>

using namespace std;

int find (int a[], int n, int h, int k, int i, int sum);

int main()
{
	int n, h, k;
	
	cin >> n >> h >> k;
	
	int a[n];
	int i;
	int res;
	
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if(k == 1)
	{
		for(i = 0, res = 0; i < n; i++)
		{
			res+=a[i];
		}
	}
	else
		res = find(a, n, h, k, 1, a[0]);
	
	cout << res << endl;
	
	return 0;
}

int find (int a[], int n, int h, int k, int i, int sum)
{
	if(i < n)
	{
		if(sum + a[i] <= h)
		{
			//cout << 1 << ' ' << sum+a[i] << endl;
			return find(a, n, h, k, i+1, sum + a[i]);
		}
		else
		{
			//cout << 2 << ' ' << 1 << endl;
			if(sum >= k)
			{
				if(a[i] > k)
				{
					if(sum >= a[i])
					{
						if((((sum+a[i]-h-1)/k)+1)*k < sum)
							return ((sum+a[i]-h-1)/k)+1 + find(a, n, h, k, i, ((sum+a[i]-h-1)/k)+1);
						else
							return (sum+k-1)/k + find(a, n, h, k, i, 0);
					}
						
					else
						return (sum+k-1)/k + find(a, n, h, k, i, 0);
				}
					
				else
					return 1 + find(a, n, h, k, i, sum-k);
			}
				
			else
				return 1 + find(a, n, h, k, i, 0);
		}
	}
	else
	{
		//cout << 3 << ' ' << (sum+k-1)/k << endl;
		return (sum+k-1)/k;
	}
}

