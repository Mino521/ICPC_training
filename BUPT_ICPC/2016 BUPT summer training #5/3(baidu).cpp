#include<cstdio>  
#include<cstring>  
#include<algorithm>  
#include<vector>  
using namespace std;  
const int maxn = 100000 + 10;  
vector<int>g[maxn],v[2];  
bool ok = true;  
int color[maxn];  
void dfs(int k,int c){  
    if(!ok)return;  
    if (color[k] != -1){  
        if (color[k] != c)ok=false;  
        return;  
    }  
    color[k] = c;  
    v[c].push_back(k);  
    int len = g[k].size();  
    for (int i = 0; i < len; ++i)dfs(g[k][i],c^1); // 0 -> 1,, 1 -> 0;  
}  
void print(vector<int> & t){  
    int len = t.size();  
    printf("%d\n",len);  
    for (int i = 0; i < len; ++i){  
        if (i)printf(" ");  
        printf("%d",t[i]);  
    }  
    printf("\n");  
}  
int main(){  
    int n,m;  
    scanf("%d%d",&n,&m);  
    for (int i = 0; i < m; ++i){  
        int u,w;  
        scanf("%d%d",&u,&w);  
        g[u].push_back(w);  
        g[w].push_back(u);  
    }  
    memset(color,-1,sizeof color);  
    for (int i = 1; i <= n; ++i){  
        if (color[i] == -1)dfs(i,0);  
    }  
    if (!ok)printf("-1\n");  
    else {  
        for (int i = 0; i < 2; ++i)print(v[i]);  
    }  
    return 0;  
}  
