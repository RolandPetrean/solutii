// https://www.varena.ro/problema/rucsac
#include <bits/stdc++.h>
using namespace std;
#define mod 999979

ifstream fin("rucsac.in");
ofstream fout("rucsac.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> g(n+1), dp(k+1);
  dp[0] = 1;
  for (int i=1; i<=n; ++i) {
    fin>>g[i];
    for (int j=k; j>0; --j) {
      if (j>=g[i]) dp[j] += dp[j-g[i]];
      if (dp[j] >= mod) dp[j] -= mod;
    }
  }
  fout<<dp[k];
}