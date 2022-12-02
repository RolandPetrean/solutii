// https://www.varena.ro/problema/cladire
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cladire.in");
ofstream fout("cladire.out");

const int MAXN=1005;
bool t[MAXN][MAXN];
int dp[MAXN][MAXN];

int main() {
  int n, m, k;
  fin>>n>>m>>k;

  for (int i=0; i<k; ++i) {
    int x, y;
    fin>>x>>y;
    t[x][y] = true;
  }

  int maxl=0;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (!t[i][j]) dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
      maxl = max(maxl, dp[i][j]);
    }
  }
  fout<<maxl;
}