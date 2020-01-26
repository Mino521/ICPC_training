#include<cstdio>  
#include<queue>  
using namespace std;  
const int maxn = 300005;  
int needread[maxn];  
int readed[maxn];  
int cnt[maxn];  
int main()  
{  
    int n,q,type,num,pop_cnt = 0;  
    queue<int> que;  
    scanf("%d %d", &n, &q);  
    int ans = 0;  
    while (q--)  
    {  
        scanf("%d %d", &type, &num);  
        if (type == 1)  
        {  
            ans++;  
            needread[num]++;  
            que.push(num);//��������Ϣʱ����Ϣ���  
        }  
        else if (type == 2)  
        {  
            ans -= needread[num] - readed[num];  
            readed[num] = needread[num];  
        }  
        else  
        {  
            int t = num - pop_cnt;//ǰ��num-pop_cnt������Ϣ�Ѿ������ˣ�������ˡ�  
            while (!que.empty() && t > 0)  
            {  
                t--;  
                int cur = que.front();  
                que.pop();  
                pop_cnt++;  
                cnt[cur]++;  
                if (cnt[cur] > readed[cur])//������ĳ��Ӧ�õ���Ϣ�����������Ӧ���Ѿ��������Ϣ���󣬽���������Ϣ����δ������Ϣ�ˣ���ʱ����δ����Ϣ�����¼�¼��  
                {  
                    ans --;  
                    readed[cur] ++;  
                }  
            }  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
}  

