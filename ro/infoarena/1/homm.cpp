// https://infoarena.ro/problema/homm
#include <bits/stdc++.h>
using namespace std;

ifstream fin("homm.in");
ofstream fout("homm.out");

array<pair<int,int>,4> dir{{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};

int main() {
  int n, m, k, sx, sy, ex, ey;
  fin>>n>>m>>k;

  vector<vector<int>> h(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>h[i][j];
  }
  fin>>sx>>sy>>ex>>ey;
  --sx; --sy; --ex; --ey;

  vector<vector<vector<int>>> cnt(k+1, vector<vector<int>>(n, vector<int>(m)));
  cnt[0][sx][sy] = 1;
  for (int p=1; p<=k; ++p) {
    for (int i=0; i<n; ++i) {
      for (int j=0; j<m; ++j) {
        if (h[i][j]!=0) continue;

        for (pair<int,int> d:dir) {
          int x=i+d.first, y=j+d.second;
          if (x>=0 && y>=0 && x<n && y<m) cnt[p][i][j] += cnt[p-1][x][y];
        }
      }
    }
  }

  int t=0;
  for (int p=0; p<=k; ++p) t += cnt[p][ex][ey];
  fout<<t;
}