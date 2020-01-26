#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;
#define maxn 1120
char str[maxn];

int main()
{
    while(scanf("%s", str)!=EOF)
    {
        int ans = 0;
        long long n = 0;

        for(int i=0; str[i] && i<11; i++)
            n = n*10+str[i]-'0';

        while(n != 1)
        {
            n = sqrt(n);
            ans ++;
            
            if(ans>6)
                break;
        }

        if(ans <= 5) printf("%d\n", ans);

        else   printf("TAT\n");

    }

    return 0;
}
