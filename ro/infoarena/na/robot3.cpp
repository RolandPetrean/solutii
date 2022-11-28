// https://www.infoarena.ro/problema/robot3
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("robot3.in");
ofstream fout("robot3.out");

int main() {
  int n, m, l, c;
  fin>>n>>m>>l>>c;
  --l; --c;

  vector<char> op(m);
  for (int i=0; i<m; ++i) fin>>op[i];

  vector<vector<int>> t(n, vector<int>(n));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) fin>>t[i][j];
  }

  int x=l, y=c, i=0, e=t[l][c];
  while (e && i<m) {
    if (op[i]=='N') --x;
    else if (op[i]=='E') ++y;
    else if (op[i]=='S') ++x;
    else --y;
    e += t[x][y];
    --e;
    ++i;
  }

  fout<<++x<<" "<<++y;
}