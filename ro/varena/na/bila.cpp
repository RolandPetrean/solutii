// https://www.varena.ro/problema/bila
// 80p
#include <bits/stdc++.h>
using namespace std;

ifstream fin("bila.in");
ofstream fout("bila.out");

array<pair<int,int>,4> dir{{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
bool unu=false;

int n, m, poz=0;
int h[1001][1001];
pair<int,int> drum[1000000];

int min4(int a, int b, int c, int d) {
  return min(a, min(b, min(c, d)));
}

void bila(int x, int y) {
  drum[poz++] = {x, y};
  if ((x==0 && y==0) || (x==n-1 && y==0) || (x==0 && y==m-1) || (x==n-1 && y==m-1)) {
    unu = true;
    
    for (int i=0; i<poz; ++i) fout<<drum[i].first+1<<" "<<drum[i].second+1<<" ";
    fout<<endl;
  }

  for (pair<int,int> d:dir) {
    int l=x+d.first, c=y+d.second;

    if (l>=0 && c>=0 && l<n && c<m && h[l][c]<h[x][y]) bila(l, c);
  }

  --poz;
}

int main() {
  int x, y;
  fin>>n>>m;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>h[i][j];
  }
  fin>>x>>y;
  --x; --y;

  bila(x, y);

  if (!unu) fout<<0;
}