// https://codeforces.com/problemset/problem/377/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAXN=505;
char maze[MAXN][MAXN]{'#'};
bool vis[MAXN][MAXN];
int neighbors[MAXN][MAXN];

int n, m, k, t=0, s=0;

array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

void dfs(int x, int y) {
  if (s>=t-k) return;
  vis[x][y] = true; ++s;
  for (pair<int,int> d:dir) {
    int l=x+d.first, c=y+d.second;
    if (maze[l][c]=='.' && !vis[l][c]) {
      dfs(l, c);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>m>>k;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      cin>>maze[i][j];
      if (maze[i][j]=='.') ++t;
    }
  }
  
  bool ok=false;
  for (int i=1; i<=n && !ok; ++i) {
    for (int j=1; j<=m && !ok; ++j) {
      if (maze[i][j]=='.') {
        dfs(i, j);
        ok = true;
      }
    }
  }

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (maze[i][j]=='.' && !vis[i][j]) maze[i][j] = 'X';
      cout<<maze[i][j];
    }
    cout<<endl;
  }
}