#include <bits/stdc++.h>  
using namespace std;  
const int M=2e5+10;  
struct aa  
{  
    int u,v,w;  
} save1[M],save2[M];  
long long mincost[M];  
bool cmp1(const aa &a,const aa &b)  
{  
    return a.u<b.u;  
}  
bool cmp2(const aa &a,const aa &b)  
{  
    return a.v<b.v;  
}  
long long gmin(long long a,long long b)  
{  
return a>b?b:a;  
}  
int main()  
{  
    freopen("test.txt", "r", stdin);
    int n,x;  
    while(scanf("%d%d",&n,&x)!=EOF)  
    {  
        for(int i=0;i<M;i++)  
        mincost[i]=INT_MAX;  
        for(int i=0; i<n; i++)  
        {  
            scanf("%d%d%d",&save1[i].u,&save1[i].v,&save1[i].w);  
            save2[i]=save1[i];  
        }  
        sort(save1,save1+n,cmp1);  
        sort(save2,save2+n,cmp2);  
        int minn=INT_MAX;  
        int j=0;  
        for(int i=0; i<n; i++)  
        {  
            while(j<n&&save2[j].v<save1[i].u)  
            {  
                mincost[save2[j].v-save2[j].u+1]=gmin(mincost[save2[j].v-save2[j].u+1],save2[j].w);//维护最小值  
                //cout << j << ' ' << i << endl;
                j++;  
            }  
            int k=x-(save1[i].v-save1[i].u+1);//找出对应时间  
            cout << ' ' << mincost[k] << ' ' << save1[i].w << endl;
			if(k>0&&minn>mincost[k]+save1[i].w)//更新最小值  
            {
			    minn=mincost[k]+save1[i].w;
				//cout << i << endl; 
			}
        }  
        if(minn==INT_MAX)  
            printf("-1\n");  
        else  
            printf("%d\n",minn);  
    }  
}
