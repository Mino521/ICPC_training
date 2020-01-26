#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>


using namespace std;

int main ()
{
	int n;
	long long t;
	long double pp,ans;
	long double P=1.000000011;
	cin >> n;
	cin >> t;
	ans = (double)n;
	pp = 1.0;
	while (t > 0)
    {
          if (t & 1)
            pp = (pp*P);
          t = t >> 1 ;
          P = (P*P);
    }
	ans *= pp;
	cout << fixed<<setprecision(7)<< ans;
	
	return 0;
}
