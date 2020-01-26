#include <iostream>

using namespace std;

int main ()
{
	double a,b;
	int count;
	
	cin >> a;
	if(a >= 1.0)
	{
		b = a;
		if(b >= 10.0)
		{
			for(count = 0; b >= 10.0;)
			{
				b = b/10.0;
				count++;
			}
		}
	}
	else
	{
		for(b = a, count = 0.0; b < 1.0;)
		{
			b = b/0.1;
		}
	}
	cout << b;
	if(count)
	{
		cout << 'E' << count;
	}
	
    return 0;
}
