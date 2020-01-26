#include<iostream>  
#include<cstdlib>  
#include<stdio.h>  
#include<string.h>  
using namespace std;  
const int maxm = 1000010;     // 模式串的最大长度  
char p[maxm];  
int  m, Next[maxm];  
void getNext()  
{  
        int i = 0, j = Next[0] = -1;  
        while(i < m)  
        {  
            if (j == -1 || p[i] == p[j])  
            {  
  
                ++i; ++j;  
                Next[i] = p[i] != p[j] ? j:Next[j];  
  
            }  
            else  
            j = Next[j];  
        }  
  
}  
  
int main()  
{  
       while(scanf("%s",p)!=EOF)  
       {  
           if(p[0]=='.') break;  
           m=strlen(p);  
           getNext();  
           int cc=1;  
           if(m%(m-Next[m])==0)  
           cc=m/(m-Next[m]);  
           cout<<cc<<endl;  
       }  
}
