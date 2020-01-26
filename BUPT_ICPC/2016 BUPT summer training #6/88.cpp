#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
//#define eps le-8
const double eps=1e-8;
const double INF=9999999;
const double inf=7777777;
using namespace std;
typedef struct Node
{
    double x;
    double y;
}point;
point p[4];
int sign(double x)
{
    return (x>eps)-(x<-eps);
}
double Distance(point p1,point p2)
{
	return( sqrt( (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y) ) );
}
double xmult(point p0,point p1,point p2)
{
    //cout<<p0.x<<" "<<p0.y<<" "<<p1.x<<" "<<p1.y<<" "<<p2.x<<" "<<p2.y<<endl;
    double p=(p1.x-p0.x)*(p2.y-p0.y);
    double q=-(p2.x-p0.x)*(p1.y-p0.y);
	return p+q;
}

bool IsIntersected(point s1,point e1,point s2,point e2)
{
	return (max(s1.x,e1.x)>=min(s2.x,e2.x))&& (max(s2.x,e2.x)>=min(s1.x,e1.x))&&(max(s1.y,e1.y)>=min(s2.y,e2.y))&&(max(s2.y,e2.y)>=min(s1.y,e1.y))&&(sign(xmult(s1,s2,e1))*sign(xmult(s1,e1,e2))>=0)&&(sign(xmult(s2,s1,e2))*sign(xmult(s2,e2,e1))>=0);
}

point Intersection(point u1,point u2,point v1,point v2)
{
	point res=u1;
	double a=(u1.x-v1.x)*(v1.y-v2.y)-(u1.y-v1.y)*(v1.x-v2.x);
	double b=(u1.x-u2.x)*(v1.y-v2.y)-(u1.y-u2.y)*(v1.x-v2.x);
	if(sign(b)==0)
    {
        res.x==INF;
        res.y==INF;
    }
    else
    {
        double t=a/b;
        res.x+=(u2.x-u1.x)*t;
        res.y+=(u2.y-u1.y)*t;
    }
	return res;
}
bool Same(point u1,point u2,point v1,point v2)
{
    if((sign(u1.y-u2.y)==0)&&(sign(u1.y-v1.y)==0)&&(sign(v1.y-v2.y)==0))
    {
        return true;
    }
    return false;
}
bool Vertical(point u1,point u2,point v1,point v2)
{
    if(sign(u1.y-u2.y)==0)
    {
        if(sign(v1.x-v2.x)==0)
        return true;
    }
    else if(sign(v1.y-v2.y)==0)
    {
        if(sign(u1.x-u2.x)==0)
            return true;
    }
    return false;
}
bool Parallel(point u1,point u2,point v1,point v2)
{
    if((sign(u1.y-u2.y)==0)||(sign(v1.y-v2.y)==0))
    return true;
    return false;
}
double slope(point u,point v)
{
    if((sign(v.x-u.x)==0)&&(sign(v.y-u.y)==0))
    {
        return INF;
    }
    if(sign(v.x-u.x)==0)
    {
        return inf;
    }
    return (v.y-u.y)/(v.x-u.x);
}

int main()
{
    int T;
    int n,m,i,j;
    int num1,num2;
    point u1,u2,v1,v2;
    double d1,d2,k1,k2,h,l,K,B;
    double area,maxn1,maxn2;
    point res,a,b,c;
    cin>>T;
    while(T--)
    {
            cin>>u1.x>>u1.y>>u2.x>>u2.y;
            cin>>v1.x>>v1.y>>v2.x>>v2.y;
            p[0]=u1;
            p[1]=u2;
            p[2]=v1;
            p[3]=v2;
            h=0;
            l=0;
            area=0;
            maxn1=-99999;
            maxn2=-99999;
            if(IsIntersected(u1,u2,v1,v2))
            {
                if(Same(u1,u2,v1,v2))
                {
                    //cout<<"00"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                if(Vertical(u1,u2,v1,v2))
                {
                    //cout<<"22"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                if(Parallel(u1,u2,v1,v2))
                {
                    //cout<<"33"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                if(sign(slope(u1,u2)-slope(v1,v2))==0)
                {
                    //cout<<"44"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                res=Intersection(u1,u2,v1,v2);
                //cout<<"OK!"<<endl;
                if(res.x==INF&&res.y==INF)
                {
                    //cout<<"55"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                //cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<endl;
                for(i=0;i<4;i++)
                {
                    if(maxn1<p[i].y)
                    {
                        maxn1=p[i].y;
                        num1=i;
                    }
                }
                for(i=0;i<4;i++)
                {
                    if(i!=num1)
                    {
                        if(maxn2<p[i].y)
                        {
                            maxn2=p[i].y;
                            num2=i;
                        }
                    }
                }
                a.x=p[num1].x;
                a.y=p[num1].y;
                b.x=p[num2].x;
                b.y=p[num2].y;
                d1=Distance(a,res);
                d2=Distance(b,res);
                if((sign(d1-d2)==-1)&&(sign(a.y-b.y)==0))
                swap(a,b);
                //if((sign(a.x-res.x)==0))
                //cout<<a.x<<" "<<a.y<<" "<<b.x<<" "<<b.y<<" "<<res.x<<" "<<res.y<<endl;
                if((sign(res.x-b.x)==0)&&(sign(res.y-b.y)==0))
                {
                    //cout<<"11"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                k1=slope(res,a);
                k2=slope(res,b);
                //cout<<k1<<" "<<k2<<endl;
                if(k1!=inf||k2!=inf)
                {
                    if((sign(k1)==-1)&&(sign(k2)==-1))
                    {
                        if(sign(k1-k2)==-1)
                        {
                            if(((sign(a.x-b.x)==0)||(sign(a.x-b.x)==-1))&&(sign(a.y-b.y)==1))
                            {
                                //cout<<"1000"<<endl;
                                cout<<"0.00"<<endl;
                                continue;
                            }
                        }
                    }
                    if((sign(k1)==1)&&(sign(k2)==1))
                    {
                        if(sign(k1-k2)==1)
                        {
                            if(((sign(a.x-b.x)==0)||(sign(a.x-b.x)==1))&&(sign(a.y-b.y)==1))
                            {
                               // cout<<"2000"<<endl;
                                cout<<"0.00"<<endl;
                                continue;
                            }
                        }
                    }
                }
                c.y=b.y;
                K=slope(res,a);
                if(K==INF)
                {
                    //cout<<"88"<<endl;
                    cout<<"0.00"<<endl;
                    continue;
                }
                if(K==inf)
                {
                    c.x=res.x;
                    //cout<<"xxx"<<endl;
                    //cout<<res.x<<" "<<res.y<<" "<<c.x<<" "<<c.y<<" "<<b.x<<" "<<b.y<<endl;
                    printf("%.2lf\n",fabs(xmult(res,c,b))/2);
                    continue;
                }
                B=a.y-K*a.x;
                if(sign(B)==0)
                    B=0;
                //cout<<K<<" "<<B<<endl;
                if(sign(c.y-B)==0)
                    c.x=0;
                else
                    c.x=(c.y-B)/K;
                if(sign(c.x)==0)
                    c.x=0;
                //cout<<a.x<<" "<<b.x<<" "<<c.x<<endl;

                //h=b.y-res.y;
               // l=b.x-c.x;
                //if(l<0)
               // l=-l;
                //area=0.5*l*h;
                //cout<<"YYY"<<endl;
                //cout<<res.x<<" "<<res.y<<" "<<c.x<<" "<<c.y<<" "<<b.x<<" "<<b.y<<endl;
                printf("%.2lf\n",fabs(xmult(res,c,b))/2);
            }
            else
            {
                cout<<"0.00"<<endl;
                continue;
            }
    }
}
