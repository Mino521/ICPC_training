#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define MAX 200100

char a[MAX], b[MAX];

bool dfs(char *p1, char *p2, int len)
{
    if(!strncmp(p1, p2, len))
    	return true;
    if(len % 2) 
    	return false;
    int n = len / 2;
    if(dfs(p1 ,p2 + n, n) && dfs(p1 + n, p2, n)) 
    	return true;
    if(dfs(p1, p2, n) && dfs(p1 + n, p2 + n, n)) 
    	return true;
    return false;
}

int main()
{
    scanf("%s %s", a, b);
    printf("%s\n", dfs(a, b, strlen(a)) ? "YES" : "NO");
}
