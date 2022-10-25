// https://www.pbinfo.ro/probleme/2066/boats
#include <bits/stdc++.h>
using namespace std;

ifstream fin("boats.in");
ofstream fout("boats.out");

int main() {
  int c, n, m;
  fin>>c>>n>>m;

  vector<vector<int>> b(n+2, vector<int>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) fin>>b[i][j];
  }

  if (c==1) {
    int p=0;
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) {
        if (b[i][j] && !b[i-1][j] && !b[i][j-1] && !b[i+1][j] && !b[i][j+1]) ++p;
      }
    }

    fout<<p;
  } else {
    array<int,1001> l{}, c{};
    for (int i=1; i<=n; ++i) {
      int curr=0;
      for (int j=1; j<=m; ++j) {
        if (b[i][j]) ++curr;
        else {
          if (curr>1) ++l[curr];
          curr = 0;
        }
      }
      if (curr>1) ++l[curr];
    }
    for (int i=1; i<=m; ++i) {
      int curr=0;
      for (int j=1; j<=n; ++j) {
        if (b[j][i]) ++curr;
        else {
          if (curr>1) ++c[curr];
          curr = 0;
        }
      }
      if (curr>1) ++c[curr];
    }

    for (int i=0; i<1001; ++i) {
      if (l[i]) fout<<"L "<<i<<" "<<l[i]<<endl;
    }
    for (int i=0; i<1001; ++i) {
      if (c[i]) fout<<"C "<<i<<" "<<c[i]<<endl;
    }
  }
}