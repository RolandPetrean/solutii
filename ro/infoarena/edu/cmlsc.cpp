// https://infoarena.ro/problema/cmlsc
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cmlsc.in");
ofstream fout("cmlsc.out");

const int MAXN=1050;
int a[MAXN], b[MAXN], dp[MAXN][MAXN];

void print(int x, int y) {
  if (x==0 || y==0) return;
  if (a[x]==b[y]) {
    print(x-1, y-1);
    fout<<a[x]<<" ";
  } else if (dp[x-1][y]<dp[x][y-1]) print(x, y-1);
  else print(x-1, y);
}

int main() {
  int n, m;
  fin>>n>>m;

  for (int i=1; i<=n; ++i) fin>>a[i];
  for (int i=1; i<=m; ++i) fin>>b[i];

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (a[i]==b[j]) dp[i][j] = dp[i-1][j-1]+1;
      else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
  }

  fout<<dp[n][m]<<endl;
  print(n, m);
}