// https://www.pbinfo.ro/probleme/392/cladire
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cladire.in");
ofstream fout("cladire.out");

const int MOD=9901;

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<int>> a(n+1, vector<int>(m+1));
  a[0][0] = 1;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      a[i+1][j] += a[i][j];
      a[i][j+1] += a[i][j];
      a[i+1][j] %= MOD;
      a[i][j+1] %= MOD;
    }
  }

  fout<<a[n-1][m-1];
}