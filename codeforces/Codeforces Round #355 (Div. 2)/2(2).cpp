#include <iostream>
#include <cmath>

using namespace std;

int main () {
  long long n,h,k;
  scanf("%I64d %I64d %I64d", &n, &h, &k);
  long long p[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%I64d", &p[i]);
  }
  long long g = 0, c = 0;
  long long resp = 0;
  while(1) {
    if(c < n ) {
    	while( (g+p[c]) <= h )
    	{
    		g += p[c];
      		c++;
		}
      
    }
    if( c < n ) {
      long long x = p[c]-(h-g);
      long long y = x/k + (x%k>0);
      resp += y;
      g = max(g-y*k, 0LL);
    }
    else
	{
		break;
  }
}
  resp += g/k + (g%k>0);
  printf("%I64d\n", resp);
  return 0;    
}
