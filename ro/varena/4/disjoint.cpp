// https://www.varena.ro/problema/disjoint
#include <bits/stdc++.h>
using namespace std;

ifstream fin("disjoint.in");
ofstream fout("disjoint.out");

int uf[100001], sz[100001];
void uf_init(int n) {
  for (int i=0; i<=n; ++i) {
    uf[i] = i;
    sz[i] = 1;
  }
}

int uf_find(int a) {
  if (uf[a] != a) uf[a] = uf_find(uf[a]);
  return uf[a];
}

void uf_union(int a, int b) {
  if (a != b) {
    if (sz[a]>sz[b]) swap(a, b);
    uf[b] = a;
    sz[a] += sz[b];
  }
}

int main() {
  int n, m;
  fin>>n>>m;

  uf_init(n);
  for (int i=0; i<m; ++i) {
    int cod, x, y;
    fin>>cod>>x>>y;
    x = uf_find(x);
    y = uf_find(y);

    if (cod==1) uf_union(x, y);
    else {
      if (x==y) fout<<"DA\n";
      else fout<<"NU\n";
    }
  }
}