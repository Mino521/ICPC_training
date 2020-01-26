#include <cstdio>  
#include <cstring>  
#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{  
    char s[10000];  
    int i;  
    long long hh=65536*65536;  
    while(~scanf("%s",s))  
    {  
        int len=strlen(s);  
        if(len>10)  
        {  
            printf("TAT\n");  
            continue;  
        }  
        else  
        {  
            long long h=0;  
            for(i=0;s[i]!='\0';i++)  
            {  
                h=h*10+(s[i]-'0');  
            }  
            if(h==0)  
            {  
                printf("TAT\n");  
                continue;  
            }  
            for(i=0;i<10;i++)  
            {  
                h=sqrt(h);  
                if(h==1)  
                    break;  
            }  
            if(i<5)  
                printf("%d\n",i+1);  
            else  
                printf("TAT\n");  
        }  
        memset(s,'\0',sizeof(s));  
    }  
    return 0;  
}
