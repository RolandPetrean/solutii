// https://www.pbinfo.ro/probleme/592/kruskal
#include <bits/stdc++.h>
using namespace std;

ifstream fin("kruskal.in");
ofstream fout("kruskal.out");

int uf[101]{}, sz[101]{};

void uf_init() {
  for (int i=0; i<101; ++i) {
    uf[i] = i;
    sz[i] = 1;
  }
}

int uf_find(int x) {
  if (x != uf[x]) uf[x] = uf_find(uf[x]);
  return uf[x];
}

void uf_union(int x, int y) {
  x = uf_find(x);
  y = uf_find(y);

  if (x != y) {
    if (sz[x] < sz[y]) swap(x, y);
    uf[y] = x;
    sz[x] += sz[y];
  }
}

int main() {
  int n, m;
  fin>>n>>m;

  vector<pair<int,pair<int,int>>> edges{};
  int x, y, c;
  while (fin>>x>>y>>c) edges.push_back({c,{x,y}});
  sort(edges.begin(), edges.end());

  uf_init();

  int t=0;
  vector<pair<int,int>> muchii{};
  for (int i=0; i<edges.size(); ++i) {
    int c=edges[i].first, x=edges[i].second.first, y=edges[i].second.second;
    if (uf_find(x) != uf_find(y)) {
      uf_union(x, y);
      t += c;
      muchii.push_back({x,y});
    }
  }

  fout<<t<<endl;
  for (auto xy:muchii) fout<<xy.first<<" "<<xy.second<<endl;
}