#include <iostream>

using namespace std;

int main ()
{
	int t,s,x;
	int ans=1;
	
	cin >> t >> s >> x;
	if(x == t)
	{
		cout << "YES";
		return 0;
	}
	
	for(;x>t;)
	{
		t += s;
		if(t == x || x == t+1)
		{
			ans = 0;
			break;
		}
		//cout << t << endl;
	}
	if(ans)
	{
		cout << "NO";
	}
	else
		cout << "YES";
	
	return 0;
}
 
