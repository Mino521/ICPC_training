#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char str[1000];
	int length;
	int i;
	int p = 1;
	
	cin >> str;
	length = strlen(str);
	//cout << length << endl;
	
	string s ="AbdHIMOopqTUVvWwXxY";
	string ss = "AHIMOoTUVvWwXxY";
	
	if(length % 2 == 1)
	{
		if(ss.find(str[length/2])+1);
		else
			p = 0;
	}
	//cout << p << endl; 
	if(p && length > 1)
	{
		//cout << '1' << endl;
		for(i = 0; i < length/2 && p; i++)
		{
			//cout << '  2  ' << endl;
			//cout << s.find(str[i]) << endl;
			//cout << ss.find(str[i]) << endl;
			if(s.find(str[i])+1)
			{
				//cout << str[i] << ' ' << str[length-i-1] << endl;
				switch(str[i])
				{
					case 'b' : 
						if(str[length-1-i] == 'd')
							break;
						else
							p = 0;
						break;
					case 'd' : 
						if(str[length-1-i] == 'b')
							break;
						else
							p = 0;
						break;
					case 'H' : 
						if(str[length-1-i] == 'H')
							break;
						else
							p = 0;
						break;
					case 'I' : 
						if(str[length-1-i] == 'I')
							break;
						else
							p = 0;
						break;
					case 'M' : 
						if(str[length-1-i] == 'M')
							break;
						else
							p = 0;
						break;
					case 'O' : 
						if(str[length-1-i] == 'O')
							break;
						else
							p = 0;
						break;
					case 'o' : 
						if(str[length-1-i] == 'o')
							break;
						else
							p = 0;
						break;
					case 'p' : 
						if(str[length-1-i] == 'q')
							break;
						else
							p = 0;
						break;
					case 'q' : 
						if(str[length-1-i] == 'p')
							break;
						else
							p = 0;
						break;
					case 'T' : 
						if(str[length-1-i] == 'T')
							break;
						else
							p = 0;
						break;
					case 'U' : 
						if(str[length-1-i] == 'U')
							break;
						else
							p = 0;
						break;
					case 'V' : 
						if(str[length-1-i] == 'V')
							break;
						else
							p = 0;
						break;
					case 'v' : 
						if(str[length-1-i] == 'v')
							break;
						else
							p = 0;
						break;
					case 'W' : 
						if(str[length-1-i] == 'W')
							break;
						else
							p = 0;
						break;
					case 'w' : 
						if(str[length-1-i] == 'w')
							break;
						else
							p = 0;
						break;
					case 'X' : 
						if(str[length-1-i] == 'X')
							break;
						else
							p = 0;
						break;
					case 'x' : 
						if(str[length-1-i] == 'x')
							break;
						else
							p = 0;
						break;
					case 'Y' : 
						if(str[length-1-i] == 'Y')
							break;
						else
							p = 0;
						break;
					case 'A' : 
						if(str[length-1-i] == 'A')
							break;
						else
							p = 0;
						break;
				}
			}
			else
				p = 0;
		}
	}
	if(p)
	{
		cout << "TAK";
	}
	else
	{
		cout << "NIE";
	}
	
	return 0;
}

