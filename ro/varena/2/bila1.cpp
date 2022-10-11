// https://www.varena.ro/problema/bila1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("bila1.in");
ofstream fout("bila1.out");

array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<int>> h(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>h[i][j];
  }

  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      int t=1, x=i, y=j;
      for (;; ++t) {
        pair<int,int> mini{x,y};
        for (pair<int,int> d:dir) {
          int nx=x+d.first, ny=y+d.second;
          if (nx>=0 && ny>=0 && nx<n && ny<m && h[nx][ny]<h[mini.first][mini.second]) mini = {nx,ny};
        }

        if (v[mini.first][mini.second]) {
          t += v[mini.first][mini.second];
          break;
        } else if (x == mini.first && y == mini.second) break;

        x = mini.first;
        y = mini.second;
      }
      v[i][j] = t;
    }
  }

  pair<int,int> maxi{};
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      if (v[i][j]>v[maxi.first][maxi.second] || (v[i][j] == v[maxi.first][maxi.second] && h[i][j]<h[maxi.first][maxi.second])) {
        maxi = {i, j};
      }
    }
  }

  fout<<v[maxi.first][maxi.second]<<" "<<h[maxi.first][maxi.second];
}