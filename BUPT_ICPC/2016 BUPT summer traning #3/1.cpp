#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;

int main ()
{
	int a;
    char b[110];
    
    scanf("%d.", &a);
    scanf("%s", b);
    
    int i, j, len, len2, d;
    len = strlen(b);
    d = 0;
    for(i = len - 1; b[i] != 'e'; i--);
    for(j = i + 1; j < len; j++) 
		d = d * 10 + (b[j] - '0');
    len2 = i;
    if(len2 == 1 && b[0] == '0' && a == 0) 
		printf("0\n");
    else
    {
        if(d == 0)
        {
            for(i = len2 - 1; i >= 0 && b[i] == '0'; i--);
            	printf("%d", a);
            if(i == -1) 
				printf("\n");
            else 
            {
            	printf(".");
                for(j = 0; j <= i; j++) 
					printf("%c", b[j]);
                printf("\n");
            }
        }
        else
        {
            int q; 
			if(a == 0) 
				q = -2; 
			else 
				q = -1;
            for(len2 -= 1; len2 >= 0 && b[len2] == '0'; len2--);
            len2++;
            for(i = 0; i < len2 && d; i++, d--)
                if(q == -2) 
					if(b[i] != '0') 
						q = i;
            if(q == -1)
            {
                printf("%d", a);
				j = 0;
            }
            else
        	{
                if(q == -2) 
					printf("0");
                j = q;
            }
            for(; j < len2; j++)
            {
                if(j == i) 
					printf(".");
                printf("%c", b[j]);
            }
            for(; d > 0; d--) 
				printf("0");
        }
    }
    
	return 0;
}

