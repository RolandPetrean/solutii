// https://www.pbinfo.ro/probleme/412/adiacenta
#include <bits/stdc++.h>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<bool>> g(n, vector<bool>(n));
  for (int i=0; i<m; ++i) {
    int x, y;
    fin>>x>>y;
    --x; --y;
    g[x][y] = g[y][x] = true;
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      fout<<g[i][j]<<" ";
    }
    fout<<endl;
  }
}