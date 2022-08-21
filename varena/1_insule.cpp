// https://www.varena.ro/problema/insule
// Solutia face 70p, are TLE cu 5ms la 3 teste.
// Probabil ca trebuie lee cu mai multe porniri dar nu stiam asta cand am scris sursa :))
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("insule.in");
ofstream fout("insule.out");

const array<pair<int,int>, 4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int bfsfill(vector<vector<int>> t, int l, int c, int ok, int target) {
  vector<vector<int>> p(t.size(), vector<int>(t[0].size()));
  queue<pair<int,int>> bfs{{{l,c}}};
  p[l][c]=1;

  while (!bfs.empty()) {
    pair<int,int> curr=bfs.front();
    bfs.pop();

    for (pair<int,int> d:dir) {
      int newx=curr.first+d.first, newy=curr.second+d.second;
      if (t[newx][newy]==ok && p[newx][newy] == 0) {
        p[newx][newy] = p[curr.first][curr.second]+1;
        bfs.push({newx, newy});
      } else if (t[newx][newy] == target) return p[curr.first][curr.second];
    }
  }

  return 10000;
}

void dfsfill(vector<vector<int>> &t, int l, int c, int ok) {
  stack<pair<int,int>> dfs{{{l,c}}};

  while (!dfs.empty()) {
    pair<int,int> curr=dfs.top();
    dfs.pop();
    t[curr.first][curr.second] = -1;

    for (pair<int,int> d:dir) {
      int newx=curr.first+d.first, newy=curr.second+d.second;
      if (t[newx][newy] == ok) dfs.push({newx, newy});
    }
  }
}

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<int>> t(n+2, vector<int>(m+2, -1));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      char digit;
      fin>>digit;
      t[i][j] = digit-'0';
    }
  }

  int r=0, g=0, b=0, minl=10000;
  auto tcnt=t;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (tcnt[i][j] == 1 || tcnt[i][j] == 2 || tcnt[i][j] == 3) {
        if (tcnt[i][j] == 1) ++r;
        else if (tcnt[i][j] == 2) ++g;
        else ++b;
        dfsfill(tcnt, i, j, tcnt[i][j]);
      }

      if (t[i][j] == 0) {
        for (pair<int,int> d:dir) {
          int newx=i+d.first, newy=j+d.second;

          if (t[newx][newy] == 1) {
            int dist=bfsfill(t, i, j, 0, 2);
            minl = min(minl, dist);
            break;
          }
        }
      }
    }
  }
  fout<<r<<" "<<g<<" "<<b<<" "<<minl;
}