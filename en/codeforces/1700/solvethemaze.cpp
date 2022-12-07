// https://codeforces.com/problemset/problem/1365/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, m;
    cin>>n>>m;

    vector<vector<char>> maze(n+2, vector<char>(m+2, '#'));
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) cin>>maze[i][j];
    }

    bool ok = true;
    for (int i=1; i<=n && ok; ++i) {
      for (int j=1; j<=m && ok; ++j) {
        if (maze[i][j]=='B') for (auto d:dir) {
          int nx=i+d.first, ny=j+d.second;
          if (maze[nx][ny]=='G') ok = false;
          if (maze[nx][ny]=='.') maze[nx][ny] = '#';
        }
      }
    }

    vector<vector<bool>> vis(n+2, vector<bool>(m+2));
    stack<pair<int,int>> dfs{};
    if (maze[n][m] != '#') dfs.push({n, m});
    while (!dfs.empty() && ok) {
      auto [x, y] = dfs.top();
      vis[x][y] = true;
      dfs.pop();

      for (auto d:dir) {
        int nx=x+d.first, ny=y+d.second;
        if (maze[nx][ny] != '#' && !vis[nx][ny]) dfs.push({nx, ny});
      }
    }

    for (int i=1; i<=n && ok; ++i) {
      for (int j=1; j<=m && ok; ++j) {
        if (maze[i][j]=='G' && !vis[i][j]) ok = false;
      }
    }

    cout<<(ok?"Yes":"No")<<endl;
  }
}