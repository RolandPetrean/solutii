// https://www.varena.ro/problema/alee
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("alee.in");
ofstream fout("alee.out");

const array<pair<int,int>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};

int main() {
  int n, m, x1, y1, x2, y2;
  fin>>n>>m;

  vector<vector<int>> p(n+2, vector<int>(n+2));
  for (int i=0; i<=n+1; ++i) p[0][i]=p[i][0]=p[n+1][i]=p[i][n+1]=-1;
  for (int i=0; i<m; ++i) {
    int x, y;
    fin>>x>>y;
    ++p[x][y];
  }
  fin>>x1>>y1>>x2>>y2;
  p[x1][y1] = 1;
  pair<int,int> xy{x1,y1}, xy2{x2,y2};

  queue<pair<int,int>> bfs{{xy}};
  while (!bfs.empty() && bfs.front() != xy2) {
    pair<int,int> curr=bfs.front();
    bfs.pop();

    for (pair<int,int> d:dir) {
      int newx=curr.first+d.first, newy=curr.second+d.second;
      if (p[newx][newy] == 0) {
        bfs.push({newx, newy});
        p[newx][newy] = p[curr.first][curr.second]+1;
      }
    }
  }
  fout<<p[x2][y2];
}