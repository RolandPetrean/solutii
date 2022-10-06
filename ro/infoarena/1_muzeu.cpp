// https://infoarena.ro/problema/muzeu
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("muzeu.in");
ofstream fout("muzeu.out");

array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int main() {
  int n;
  fin>>n;

  vector<vector<char>> m(n+2, vector<char>(n+2));
  vector<vector<int>> p(n+2, vector<int>(n+2, 62501));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) fin>>m[i][j];
  }

  queue<pair<int,int>> bfs;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      if (m[i][j] == 'P') {
        bfs.push({i, j});
        p[i][j] = 0;
      }
    }
  }

  vector<vector<bool>> t(n+2, vector<bool>(n+2));
  while (!bfs.empty()) {
    pair<int,int> curr=bfs.front();
    bfs.pop();

    for (pair<int,int> d:dir) {
      int l=curr.first+d.first, c=curr.second+d.second;
      if (m[l][c] == '.' && !t[l][c]) {
        t[l][c]=true;
        p[l][c]=min(p[l][c], p[curr.first][curr.second]+1);
        bfs.push({l, c});
      }
    }
  }

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      if (m[i][j] == '#') fout<<-2;
      else if (p[i][j]>62500) fout<<-1;
      else fout<<p[i][j];

      fout<<" ";
    }
    fout<<endl;
  }
}