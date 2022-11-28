// https://www.varena.ro/problema/flori
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("flori.in");
ofstream fout("flori.out");

int main() {
  int n, m, z;
  fin>>n>>m;

  vector<vector<int>> f(n+2, vector<int>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) fin>>f[i][j];
  }

  fin>>z;
  vector<vector<int>> mars(n+2, vector<int>(m+2));
  for (int i=0; i<z; ++i) {
    int l1, c1, l2, c2, x;
    fin>>l1>>c1>>l2>>c2>>x;
    mars[l1][c1] += x;
    mars[l1][c2+1] -= x;
    mars[l2+1][c1] -= x;
    mars[l2+1][c2+1] += x;
  }

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) mars[i][j] += mars[i-1][j] + mars[i][j-1] - mars[i-1][j-1];
  }

  int maxi=0, maxnr=0;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      f[i][j] += mars[i][j];
      if (f[i][j]>maxi) {
        maxi = f[i][j];
        maxnr = 1;
      } else if (f[i][j]==maxi) ++maxnr;
    }
  }

  fout<<maxi<<" "<<maxnr;
}