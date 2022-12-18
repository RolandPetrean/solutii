// https://www.pbinfo.ro/probleme/3475/terencasa-low
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("terencasa_low.in");
ofstream fout("terencasa_low.out");

int main() {
  int n, m;
  fin>>n>>m;

  int tmax=-1, l1, c1, l2, c2;
  vector<vector<int>> dp(n+2, vector<int>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      fin>>dp[i][j];
      if (dp[i][j]) dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
      if (dp[i][j]>tmax) {
        tmax = dp[i][j];
        l1 = i-tmax+1; c1 = j-tmax+1;
        l2 = i; c2=j;
      }
    }
  }

  fout<<tmax<<endl<<l1<<" "<<c1<<" "<<l2<<" "<<c2;
}