// https://www.varena.ro/problema/bila1
#include <bits/stdc++.h>
#define LIM 126
using namespace std;

ifstream fin("bila1.in");
ofstream fout("bila1.out");

int n, m;
int h[LIM][LIM], v[LIM][LIM];
array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int bila(int x, int y) {
  if (v[x][y]) return v[x][y];

  pair<int,int> mini{x,y};
  for (pair<int,int> d:dir) {
    int tx=x+d.first, ty=y+d.second;
    if (tx>=0 && ty>=0 && tx<n && ty<m && h[tx][ty]<h[mini.first][mini.second]) mini = {tx, ty};
  }

  if (mini.first == x && mini.second == y) return 1;

  v[x][y] = 1+bila(mini.first, mini.second);
  return v[x][y];
}

int main() {
  fin>>n>>m;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>h[i][j];
  }

  pair<int,int> maxi{};
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      int x=bila(i, j);
      if (x>v[maxi.first][maxi.second] || (x == v[maxi.first][maxi.second] && h[i][j]<h[maxi.first][maxi.second]))
        maxi = {i, j};
    }
  }

  fout<<v[maxi.first][maxi.second]<<" "<<h[maxi.first][maxi.second];
}