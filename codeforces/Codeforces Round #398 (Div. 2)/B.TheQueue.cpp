#include <iostream>
#include <queue>
using namespace std;
 
int main(void)
{
	int start,end;
	int t;
	int n;
	cin >> start >> end >> t;
	cin >> n;
	queue<int> a;
	queue<int> wait;
	for(int i = 0; i < n; i++)
	{
		int time;
		cin >> time;
		a.push(time);
	}
	if(a.front() < start)
	{
		while(1)
		{
			if(a.front() < start)
			{
				wait.push(a.front());
				a.pop();
			}
			else
				break;
		}
	}
	int flag = 0;
	for(int i = start; i < end; i++)
	{
		if(a.front() <= i)
		{
			wait.push(a.front());
			a.pop();
		}
		if(a.empty())
		{
			cout << i-1;
			return 0;
		}
		if(flag >= t)
		{
			flag = 0;
			wait.pop();
		}
	}
	return 0;
}
