#include<stdio.h>  
#include<string.h> 
#include <cstdio> 
#define M 400010  
int j,n,res[M],next[M];  
char s[M];  
void getNext()  
{  
    int i=1;  
    next[0]=-1;          
	for(j=-1;s[i];i++)
	{  
        while(j!=-1&&s[j+1]!=s[i])j=next[j];  
        if(s[j+1]==s[i])j++;  
        next[i]=j;  
    }  
    n=i;  
}  
void output_next()
{
	int len = strlen(s);
	for(int i = 0; i <= len; i++)
		printf("%d ",next[i]);
	printf("\n");
}
int main()  
{  
    int i,num;  
	freopen("input.txt","r",stdin);
	while(~scanf("%s",s))
	{  
        getNext();  
        output_next();
        j=n-1;  
        num=0;  
        while(j!=-1)
		{  
            res[++num]=j+1;  
            j=next[j];  
        }  
    	for(i=num;i>0;i--)printf("%d ",res[i]);  
        puts("");  
    }  
    return 0;  
}  

