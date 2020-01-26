#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

typedef std::pair<int, int> PII;
const int MAXN = 500 + 10, MAXM = 100000;

const int ans[] = {1,-1,2,-1,0,2,-1,1,-1,-1,-1,2,-1,-1,2,3,-1,1,-1,0,4,2,-1,-1,-1,-1,1,0,-1,-1,2,-1,8,0,-1,-1,-1,-1,-1,-1,3,-1,2,-1,0,1,-1,-1,-1,-1,-1,5,-1,-1,9,12,-1,-1,-1,7,5,4,7,11,-1,8,-1,3,7,5,-1,-1,9,-1,4,-1,5,5,7,8,5,11,9,5,-1,11,-1,4,7,6,-1,7,6,7,-1,5,4,9,7,-1,10,6,11,-1,19,-1,19,13,10,9,10,11,-1,11,10,17,13,10,9,10,12,-1,14,12,13,10,12,17,10,7,12,20,9,11,-1,9,9,9,-1,12,8,18,16,10,13,13,-1,-1,11,13,12,9,-1,22,-1,30,27,21,25,22,25,22,26,-1,24,20,20,22,-1,24,22,23,18,22,23,18,20,20,-1,-1,48,50,-1,71,-1,-1,-1,64,128,123,132,122,120};

char s[MAXN];
int x[MAXM], y[MAXM];

void quit(const char *s) {
  printf("%s\n", s);
  exit(0);
}

int main(int argc, char *argv[]) {
  FILE *in = fopen(argv[1], "r");
  int T;
  fscanf(in, "%d", &T);
  for (int cas = 1; cas <= T; ++cas) {
    int n, m;
    fscanf(in, "%d%d", &n, &m);
    static char s[10000];
    fscanf(in, "%s", s);
    std::set<PII> edges;
    for (int i = 0; i < m; ++i) {
      fscanf(in, "%d%d", x + i, y + i);
      x[i]--;
      y[i]--;
      edges.insert(PII(x[i], y[i]));
      edges.insert(PII(y[i], x[i]));
    }
    int jury_step = ans[cas - 1], user_step;
    scanf("%d", &user_step);
    if (user_step == -1 && jury_step != -1) {
      quit("jury has the better answer.\n");
    }
    if (user_step == -1 && jury_step == -1) {
      continue;
    }
    if (user_step > jury_step && jury_step != -1) {
      quit("jury has the better answer.\n");
    } else {
      for (int i = 0; i < user_step; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x < 1 || x > n) quit("x must be in the range [1, n]\n");
        if (y < 1 || y > n) quit("y must be in the range [1, n]\n");
        if (!edges.count(std::make_pair(x - 1, y - 1))) {
          quit("(input is not an edge in the graph");
        }
        std::swap(s[x - 1], s[y - 1]);
      }
      bool flag = true;
      for (int i = 0; i < m; ++i) {
        flag &= s[x[i]] != s[y[i]];
      }
      if (!flag) {
        quit("adjacent nodes must have different colors.\n");
      } else if (user_step < jury_step || jury_step == -1) {
        quit("participant has the better answer.\n");
        assert(false);
      }
    }
  }
  quit("AC!\n");
  return 0;
}
