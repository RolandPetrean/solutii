// https://www.infoarena.ro/problema/traseu3
// 95p, killed by signal 11 pe testul 1 :cry:
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("traseu3.in");
ofstream fout("traseu3.out");

array<tuple<short,short,short>,6> dir{{{-1,0,0},{0,-1,0},{0,0,-1},{0,0,1},{0,1,0},{1,0,0}}};

int main() {
  int n, m;
  fin>>n>>m;

  short k1, l1, c1, k2, l2, c2;
  fin>>k1>>l1>>c1>>k2>>l2>>c2;
  --k1; --l1; --c1; --k2; --l2; --c2;

  vector<vector<vector<pair<short,tuple<short,short,short>>>>> h(n, vector<vector<pair<short,tuple<short,short,short>>>>(n, vector<pair<short,tuple<short,short,short>>>(n)));
  for (int i=0; i<m; ++i) {
    short x, y, z;
    fin>>x>>y>>z;
    --x; --y; --z;
    ++h[x][y][z].first;
  }
  
  ++h[k1][l1][c1].first;
  h[k1][l1][c1].second = {k1, l1, c1};
  queue<tuple<short,short,short>> bfs{{{k1, l1, c1}}};
  while (!bfs.empty() && bfs.front() != make_tuple(k2, l2, c2)) {
    tuple<short,short,short> curr=bfs.front();
    bfs.pop();

    for (tuple<short,short,short> d:dir) {
      short newx=get<0>(curr)+get<0>(d), newy=get<1>(curr)+get<1>(d), newz=get<2>(curr)+get<2>(d);
      if (newx<n && newy<n && newz<n && newx>=0 && newy>=0 && newz>=0 && h[newx][newy][newz].first == 0) {
        h[newx][newy][newz] = {h[get<0>(curr)][get<1>(curr)][get<2>(curr)].first+1, curr};
        bfs.push({newx, newy, newz});
      }
    }
  }

  fout<<h[k2][l2][c2].first<<endl;

  tuple<short,short,short> curr={k2,l2,c2};
  stack<tuple<short,short,short>> path;
  while (h[get<0>(curr)][get<1>(curr)][get<2>(curr)].second != curr) {
    path.push(curr);
    curr = h[get<0>(curr)][get<1>(curr)][get<2>(curr)].second;
  }
  path.push(curr);

  while (!path.empty()) {
    tuple<short,short,short> p=path.top();
    fout<<get<0>(p)+1<<" "<<get<1>(p)+1<<" "<<get<2>(p)+1<<endl;
    path.pop();
  }
}