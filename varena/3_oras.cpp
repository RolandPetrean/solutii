// https://www.varena.ro/problema/oras
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("oras.in");
ofstream fout("oras.out");

int arie(vector<vector<char>>& o, int l, int c, char empty) {
  o[l][c] = tolower(o[l][c]);

  int a=1;
  for (int i=-1; i<=1; ++i) {
    for (int j=-1; j<=1; ++j) {
      if (i==j || -i==j) continue;
      if (o[l+i][c+j] == empty) a += arie(o, l+i, c+j, empty);
    }
  }

  return a;
}

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<char>> o(n+2, vector<char>(m+2, '.'));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) fin>>o[i][j];
  }

  int tp=0, tc=0, maxp=0;
  for (int l=1; l<=n; ++l) {
    for (int c=1; c<=m; ++c) {

      // contur
      if (o[l][c] != '.') {
        bool p=false;
        for (int i=-1; i<=1; ++i) {
          for (int j=-1; j<=1; ++j) {
            if (o[l+i][c+j] == '.') p=true;
          }
        }
        tp += p;
      }

      // cladiri
      if (o[l][c] == 'C') {
        ++tc;
        arie(o, l, c, 'C');
      }

      // parcuri
      if (o[l][c] == 'P') {
        maxp = max(maxp, arie(o, l, c, 'P'));
      }
    }
  }

  fout<<tp<<" "<<tc<<" "<<maxp;
}