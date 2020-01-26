#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
struct Node
{
	int r,c,dir;
	Node(int rr, int cc, int dd)
	{
		r = rr;
		c = cc;
		dir = dd;
	}
	Node(){
	}
}; //位于(r,c)，面朝dir 
//方向 
const char* dirs = "NESW";
const char* turns = "FLR";
int dir_id(char c)
{
	return strchr(dirs, c) - dirs;
}
int turn_id(char c)
{
	return strchr(turns, c) - turns;
}
//行走函数
const int dr[] = {-1, 0, 1, 0};
const int dc[] = {0, 1, 0, -1};
Node walk(const Node& u, int turn)
{
	int dir = u.dir;
	if(turn == 1) dir = (dir+3) % 4; //向左转（逆时针）
	if(turn == 2) dir = (dir+1) % 4; //向右转（顺时针）
	return Node(u.r + dr[dir], u.c + dc[dir],dir); 
 } 
bool has_edge[10][10][4][4];
int d[10][10][4];
Node p[10][10][4];
int r1,c1,dir;
int r0,c0;
int r2,c2;
bool flag;
bool inside(int r, int c)
{
	if(r > 0 && r < 10 && c > 0 && c <10)
		return true;
	return false;
}
void print_ans(Node u)
{
	vector<Node>nodes;
	while(1)
	{
		nodes.push_back(u);
		if(d[u.r][u.c][u.dir] == 0)
			break;
		u = p[u.r][u.c][u.dir];
	}
	nodes.push_back(Node(r0,c0,dir));
	int cnt = 0;
	for(int i = nodes.size()-1; i >= 0; i--)
	{
		if(cnt % 10 == 0)
			cout << ' ';
		cout << '(' << nodes[i].r << ',' << nodes[i].c << ')';
		if(++cnt % 10 == 0)
			cout << endl;
	}
	if(nodes.size() % 10 != 0)
		cout << endl;
}
void solve()
{
	queue<Node>q;
	memset(d,-1,sizeof(d));
	memset(p,0,sizeof(p));
	Node u(r1,c1,dir);
	d[u.r][u.c][u.dir] = 0;
	q.push(u);
	while(!q.empty())
	{
		Node u = q.front();
		q.pop();
		if(u.r = r2 && u.c == c2)
		{
			flag = 0;
			print_ans(u);
			return;
		}
		for(int i = 0; i < 3; i++)
		{
			Node v = walk(u,i);
			if(has_edge[u.r][u.c][u.dir][i] && inside(v.r,v.c) && d[v.r][v.c][v.dir] < 0)
			{
				d[v.r][v.c][v.dir] = d[u.r][u.c][u.dir] + 1;
                p[v.r][v.c][v.dir] = u;
                q.push(v);
			}
		}
	}
}
int main()
{
	char str[30];
	while(~scanf("%s",str) && strcmp(str,"END"))
	{
		cout << str << endl;
		flag = 1;
		memset(has_edge,0,sizeof(has_edge));
		char ch;
		cin >> r0 >> c0 >> ch >> r2 >> c2;
		dir = dir_id(ch);
        r1 = r0 + dr[dir];
        c1 = c0 + dc[dir];
        int r,c;
        char str2[30];
		while(cin >> r, r)
		{
			cin >> c;
			while(cin >> str2)
			{
				if(str2[0] == '*')
					break;
				int dirID = dir_id(str2[0]);
				int len = strlen(str2);
				for(int i = 1; i < len; i++)
				{
					int turnID = turn_id(str2[i]);
					has_edge[r][c][dirID][turnID] = 1;
				}
			}
		}
		solve();
		if(flag)
			cout << "  No Solution Possible" << endl;
		getchar();
	}
	return 0;
 } 
