// https://www.infoarena.ro/problema/apm
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("apm.in");
ofstream fout("apm.out");

const int MAXN=200005;
int dsu[MAXN], sz[MAXN];

void dsu_init() {
  for (int i=0; i<MAXN; ++i) {
    dsu[i] = i;
    sz[i] = 1;
  }
}

int dsu_find(int x) {
  if (dsu[x] != x) dsu[x] = dsu_find(dsu[x]);
  return dsu[x];
}

void dsu_union(int a, int b) {
  if (sz[a]<sz[b]) swap(a, b);
  dsu[b] = a;
  sz[a] += sz[b];
}

int main() {
  int n, m;
  fin>>n>>m;

  dsu_init();

  vector<pair<int,pair<int,int>>> edg;
  for (int i=0; i<m; ++i) {
    int x, y, c;
    fin>>x>>y>>c;
    edg.push_back({c, {x,y}});
  }
  sort(edg.begin(), edg.end());

  int t=0;
  vector<pair<int,int>> apm;
  for (auto e:edg) {
    int cost=e.first, x=e.second.first, y=e.second.second;
    int dx = dsu_find(x), dy = dsu_find(y);

    if (dx != dy) {
      dsu_union(dx, dy);
      t += cost;
      apm.push_back({x, y});
    }
  }

  fout<<t<<endl<<apm.size()<<endl;
  for (auto xy:apm) fout<<xy.first<<" "<<xy.second<<endl;
}