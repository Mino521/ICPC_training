#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	string str;
	int len;
	int a,b;
	int n,c;
	int ld;
	
	cin >> str;
	len = str.size();
	a = str.find('.');
	b = str.find('e');
	c = len - b - 1;
	/*cout << ld << endl;
	if(ld == 100)
		c = 3;
	else if(ld >=10)
		c = 2;
	else if(ld != 0)
		c = 1;
	else
		c = 0;
	cout << c << endl;*/
	//cout << str[b] << endl;
	n = 0;
	for(int i = 0, p = 0; i < c; i++)
	{
		switch(str[b+1+i])
		{
			case '0':
				p = 0;break;
			case '1':
				p = 1;break;
			case '2':
				p = 2;break;
			case '3':
				p = 3;break;
			case '4':
				p = 4;break;
			case '5':
				p = 5;break;
			case '6':
				p = 6;break;
			case '7':
				p = 7;break;
			case '8':
				p = 8;break;
			case '9':
				p = 9;break;
			
		}
		//cout << p << endl;
		n = n*10 + p;
	}
	//cout << n << endl;
	if(n == 0)
		{
			for(int i = 0;i < b;i++)
			{
				cout << str[i];
			}
			return 0;
		}
		
	int index = 0;
	int i = 0;
	while(1)
	{
		if(index == a+n+1 && index < b)
			cout << '.';
		if(index == a)
		{
			index++;
			continue;
		}
		if(index < b)
		{
			if(index < a+n && (str[index] == '0' && str[index+1] == '0') || (str[index] == '0' && str[index+1] == '.' && str[index+2] == '0'))
			{
				index++;
				continue;
			}
			else
				cout << str[index];
		}
			
		else
		{
			
			if(i++ < a+n-b+1)
				cout << '0';
			else
				break;
		}
		index++;
	}
	
	return 0;
}
 
