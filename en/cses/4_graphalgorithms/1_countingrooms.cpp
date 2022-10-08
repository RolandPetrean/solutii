// https://cses.fi/problemset/task/1192
#include <bits/stdc++.h>
using namespace std;

#define uint unsigned long long#define endl '\n'#define mod 1000000007

int n, m;
array<pair<int,int>,4> dir{{{1, 0}, {0, 1}, {-1, 0}, {0, -1}}};

void dfs(vector<vector<char>>& b, int l, int c) {
  stack<pair<int,int>> s{{{l, c}}};
  while (!s.empty()) {
    pair<int,int> curr = s.top();
    s.pop();
    b[curr.first][curr.second] = '#';

    for (pair<int,int> d:dir) {
      int x=curr.first+d.first, y=curr.second+d.second;
      if (x<n && y<m && x>=0 && y>=0 && b[x][y] == '.') s.push({x, y});
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>m;

  vector<vector<char>> b(n, vector<char>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) cin>>b[i][j];
  }

  int r=0;
  stack<int> s;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      if (b[i][j] == '.') {
        dfs(b, i, j);
        ++r;
      }
    }
  }
  cout<<r;
}