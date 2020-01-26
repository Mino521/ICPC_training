#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
	int n;
	int i;
	int a[100010],c[100010];
	int len;
	while(~scanf("%d",&n))
	{ 
		for(i = 0; i < n; i++)  
            cin >> a[i];  
        c[0] = -1;  
        len = 0;  
        for(i = 0; i < n; i++)  
        {  
            if(a[i] > c[len])  
                c[++len] = a[i];  
            else  
            {  
                int l = 0, r = len, mid;  
                while(l <= r)  
                {  
                    mid=(l+r)>>1;  
                    if(c[mid] < a[i])  
                        l = mid+1;  
                    else  
                        r = mid-1;  
                }  
                c[l] = a[i];  
            }  
        }  
        cout << len <<endl;  
	}
	return 0;
}

