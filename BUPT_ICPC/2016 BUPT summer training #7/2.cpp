#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define MAX 200500

int n,len[2];  
char str[2][MAX]; 

void change(char str[], int s, int e)
{  
    int l = e - s + 1, s1, s2;  
    if(l & 1) 
		return;  
    l = l>>1;
	s1 = s;
	s2 = s + l;  
    change(str,s,s + l - 1);  
    change(str,s + l,e);  
    for(int i = 0; i < l; i++, s1++, s2++)
	{  
        if(str[s1] > str[s2]) 
		{  
            s1 = s;s2 = s + l;  
            for(int j = 0;j< l;j++,s1++,s2++)
			{  
                swap(str[s1],str[s2]);  
            }  
            break;  
        }  
        else if(str[s1] < str[s2]) 
			break;  
    }  
  
}  

int main()  
{  
    while(scanf("%s",str[0]) != EOF)  
    {  
        scanf("%s",str[1]);
        len[0] = strlen(str[0]);
		change(str[0],0,len[0] - 1);  
        len[1] = strlen(str[1]);
		change(str[1],0,len[1] - 1);
		cout<<str[0]<<endl;
		cout<<str[1]<<endl;  
        if(!strcmp(str[0],str[1])) 
            printf("YES\n");
        else  
            printf("NO\n"); 
    }  
    return 0;  
} 
