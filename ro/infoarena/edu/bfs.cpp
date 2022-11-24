// https://www.infoarena.ro/problema/bfs
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("bfs.in");
ofstream fout("bfs.out");

int main() {
  int n, m, s;
  fin>>n>>m>>s;
  --s;

  vector<vector<int>> e(n);
  for (int i=0; i<m; ++i) {
    int x, y;
    fin>>x>>y;
    --x; --y;
    e[x].push_back(y);
  }

  vector<bool> vis(n);
  vector<int> dist(n, -1);
  queue<pair<int,int>> q;
  q.push({s,0});
  vis[s] = true;

  while (!q.empty()) {
    pair<int,int> curr=q.front();
    q.pop();
    dist[curr.first] = curr.second;

    for (int y:e[curr.first]) {
      if (!vis[y]) {
        vis[y] = true;
        q.push({y, curr.second+1});
      }
    }
  }

  for (int i=0; i<n; ++i) fout<<dist[i]<<" ";
}