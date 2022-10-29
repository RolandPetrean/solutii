// https://www.pbinfo.ro/probleme/413/adiacenta1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");

bool g[100][100];

int main() {
  int x, y, maxi=0;
  while (fin>>x>>y) {
    --x; --y;
    g[x][y] = g[y][x] = true;
    maxi = max(maxi, max(x, y));
  }

  for (int i=0; i<=maxi; ++i) {
    for (int j=0; j<=maxi; ++j) {
      fout<<g[i][j]<<" ";
    }
    fout<<endl;
  }
}