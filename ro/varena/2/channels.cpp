// https://www.varena.ro/problema/channels
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("channels.in");
ofstream fout("channels.out");

const int MAXN=1005;
int dsu[MAXN], dsu_size[MAXN];

void dsu_init() {
  for (int i=0; i<MAXN; ++i) {
    dsu[i] = i;
    dsu_size[i] = 1;
  }
}

int dsu_find(int x) {
  if (dsu[x] != x) dsu[x] = dsu_find(dsu[x]);
  return dsu[x];
}

void dsu_union(int a, int b) {
  if (dsu_size[a]<dsu_size[b]) swap(a, b);
  dsu[b] = a;
  dsu_size[a] += dsu_size[b];
}

int main() {
  dsu_init();

  int n, m, k;
  fin>>n>>m;

  vector<pair<int,pair<int,int>>> edg(m);
  for (int i=0; i<m; ++i) fin>>edg[i].second.first>>edg[i].second.second>>edg[i].first;
  sort(edg.begin(), edg.end(), greater<pair<int,pair<int,int>>>());
  fin>>k;

  int cost=0;
  for (auto e:edg) {
    int w=e.first, i=e.second.first, j=e.second.second;
    i = dsu_find(i);
    j = dsu_find(j);
    if (i != j) {
      dsu_union(i, j);
      if (e.first<k) ++cost;
    }
  }

  fout<<cost;
}