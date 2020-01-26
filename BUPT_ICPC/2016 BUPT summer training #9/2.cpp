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
	int n,m,l,k,i,j;  
    cin >> n >> l;
    int a[n],b[l];  
    cin >> k >> m;
    for(i = 0; i < n; i++)  
    	cin >> a[i];
    for(i = 0; i < l; i++)  
    	cin >> b[i];
    if(a[k-1] < b[l-m])  
    	cout << "YES\n";
    else 
    	cout << "NO\n";
	return 0;
}

