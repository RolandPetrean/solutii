// https://codeforces.com/problemset/problem/1176/E
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m;
void dfs(vector<vector<int>>& e, vector<bool>& vis, vector<int>& even, vector<int>& odd, int node, bool p) {
  if (p) odd.push_back(node);
  else even.push_back(node);
  vis[node] = true;

  for (int x:e[node]) {
    if (!vis[x]) dfs(e, vis, even, odd, x, !p);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    cin>>n>>m;

    vector<bool> vis(n+1);
    vector<int> even{}, odd{};
    vector<vector<int>> e(n+1);
    for (int i=0; i<m; ++i) {
      int u, v;
      cin>>u>>v;
      e[u].push_back(v);
      e[v].push_back(u);
    }

    dfs(e, vis, even, odd, 1, 0);

    if (odd.size()<even.size()) swap(even, odd);
    cout<<even.size()<<endl;
    for (int x:even) cout<<x<<" ";
    cout<<endl;
  }
}