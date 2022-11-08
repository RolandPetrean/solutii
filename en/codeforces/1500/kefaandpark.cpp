// https://codeforces.com/problemset/problem/580/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAXN=100001;
int n, m;

bool cats[MAXN], visited[MAXN];
vector<int> edges[MAXN];


int dfs(int node, int c) {
  visited[node] = true;

  if (cats[node]) ++c;
  else c = 0;
  if (c>m) return 0;

  int t=0;
  bool ok=false;
  for (int edge:edges[node]) {
    if (!visited[edge]) {
      ok = true;
      t += dfs(edge, c);
    }
  }
  if (!ok) return 1;
  return t;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>m;

  for (int i=0; i<n; ++i) cin>>cats[i];
  for (int i=0; i<n-1; ++i) {
    int x, y;
    cin>>x>>y;
    --x; --y;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }

  cout<<dfs(0, 0);
}