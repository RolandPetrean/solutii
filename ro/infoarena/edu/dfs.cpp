// https://www.infoarena.ro/problema/dfs
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("dfs.in");
ofstream fout("dfs.out");

const int MAXN=100005;
int vis[MAXN];
vector<int> g[MAXN];

void dfs(int v) {
  vis[v] = true;
  for (int e:g[v]) {
    if (!vis[e]) dfs(e);
  }
}

int main() {
  int n, m;
  fin>>n>>m;
  
  for (int i=0; i<m; ++i) {
    int x, y;
    fin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  int comp=0;
  for (int i=1; i<=n; ++i) {
    if (!vis[i]) {
      ++comp;
      dfs(i);
    }
  }
  fout<<comp;
}