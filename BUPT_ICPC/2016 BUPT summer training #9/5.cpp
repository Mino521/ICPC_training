#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm> 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define maxn 810
int flag[maxn], ret[maxn];
struct node
{
    int x, y, c;
}array[maxn*maxn];

bool cmp(node a, node b)
{
    return a.c > b.c;
}

int main()
{
    memset(flag, 0, sizeof(flag));
    int n, k = 0;
    cin >> n;
    for(int i = 2; i <= 2*n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cin >> array[k].c;
            array[k].x = i;
            array[k].y = j;
            k++;
        }
    }
    sort(array, array+k, cmp);
    //for(int i = 0; i < 2*n; i++)
    //{
    //	cout << array[i].x << ' ' << array[i].y << endl;
	//}
    for(int i = 0; i < k; i++)
    {
        if(!flag[array[i].x] && !flag[array[i].y])
        {
            ret[array[i].x] = array[i].y;
            ret[array[i].y] = array[i].x;
            flag[array[i].x] = 1;
            flag[array[i].y] = 1;
        }
    }
    for(int i=1; i<=2*n; i++)
        cout<<ret[i]<<" ";
    
    return 0;
}


