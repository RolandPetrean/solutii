// https://www.pbinfo.ro/probleme/4050/amongus
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("amongus.in");
ofstream fout("amongus.out");

const int MAXN=105;

int nava[MAXN][MAXN];
array<pair<int,int>,8> dir{{{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}}};

int dfs(int l, int c) {
  int p=(nava[l][c]==2);
  nava[l][c] = 3;
  for (pair<int,int> d:dir) {
    int x=l+d.first, y=c+d.second;
    if (nava[x][y] == 0 || nava[x][y] == 2) p += dfs(x, y);
  }
  return p;
}

int main() {
  int c, n, m;
  fin>>c>>n>>m;

  int c1=0;

  memset(nava, 1, sizeof(nava));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      fin>>nava[i][j];
      if (nava[i][j]==0) ++c1;
    }
  }

  if (nava[1][1]==1) {
    fout<<"misiune esuata";
    return 0;
  }

  if (c==1) {
    fout<<c1;
    return 0;
  }

  int p=dfs(1, 1);
  if (c==2) {
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) fout<<nava[i][j]<<" ";
      fout<<endl;
    }
  } else fout<<p;
}