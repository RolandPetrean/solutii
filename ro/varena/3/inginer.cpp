// https://www.varena.ro/problema/inginer
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("inginer.in");
ofstream fout("inginer.out");

const array<pair<int,int>,4> dir{{{1,0}, {-1,0}, {0,1}, {0,-1}}};

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<bool>> p(n+2, vector<bool>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      char x;
      fin>>x;
      if (x == 'X') p[i][j]=true;
    }
  }

  int x1, y1, x2, y2;
  while (fin>>x1>>y1>>x2>>y2) {
    if (x1==0 && y1==0 && x2==0 && y2==0) break;

    vector<vector<int>> l(n+2, vector<int>(m+2));
    queue<pair<int,int>> bfs{{{x1, y1}}};
    while (!bfs.empty() && bfs.front() != make_pair(x2, y2)) {
      pair<int,int> curr=bfs.front();
      bfs.pop();

      for (pair<int,int> d:dir) {
        int newx=curr.first+d.first, newy=curr.second+d.second;
        if (newx<n+2 && newy<m+2 && newx>=0 && newy>=0 && (!p[newx][newy] || (newx==x2 && newy==y2)) && l[newx][newy]==0) {
          l[newx][newy] = l[curr.first][curr.second]+1;
          bfs.push({newx, newy});
        }
      }
    }
    
    fout<<l[x2][y2]<<endl;
  }
}