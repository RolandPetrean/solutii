// https://www.pbinfo.ro/probleme/3435/foto1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("foto.in");
ofstream fout("foto.out");

const int MAXN=105;

bool t[MAXN][MAXN], vis[MAXN][MAXN];

int dfs(int l, int c) {
  vis[l][c] = true;

  int h=0;
  if (t[l+1][c] && !vis[l+1][c]) h = dfs(l+1, c);
  else if (t[l+1][c-1] && !vis[l+1][c-1]) h = dfs(l+1, c-1);
  else if (t[l+1][c+1] && !vis[l+1][c+1]) h = dfs(l+1, c+1);
  return h+1;
}

int main() {
  int c, n, m;
  fin>>c>>n>>m;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) fin>>t[i][j];
  }

  int f=0, maxb=0, maxh=0;
  for (int i=1; i<=n; ++i) {
    int curr=0;
    for (int j=1; j<=m; ++j) {
      if (t[i][j]) curr=0;
      else ++curr;
      maxb = max(maxb, curr);

      if (t[i][j] && !vis[i][j]) {
        ++f;
        maxh = max(maxh, dfs(i, j));
      }
    }
  }

  if (c==1) fout<<maxb;
  else fout<<f<<" "<<maxh;
}