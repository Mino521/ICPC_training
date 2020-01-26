#include<stdio.h>
#include<string.h>

int next[400005];
char s[400005];
int sum[400000];

void get_next(int len)
{
    int i,j;
    i=0;
    j=-1;
    next[0]=-1;
    while(i<len)
    {
        if(j==-1||s[i]==s[j])
        {
            ++i;
            ++j;
            next[i]=j;
        }
        else
            j=next[j];
    }
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
    int len,i,k;
    freopen("input.txt","r",stdin);
    while(scanf("%s",s)!=EOF)
    {
        k=0;
        len=strlen(s);
        get_next(len);
        output_next();
        for(i=len;i!=0;)
        {
            sum[k++]=next[i];
            i=next[i];
        }
        for(i=k-2;i>=0;--i)
            printf("%d ",sum[i]);
        printf("%d\n",len);
    }
    return 0;
}
