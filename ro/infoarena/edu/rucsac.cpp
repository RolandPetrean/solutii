// https://infoarena.ro/problema/rucsac
#include <bits/stdc++.h>
using namespace std;

ifstream fin("rucsac.in");
ofstream fout("rucsac.out");

int main() {
  int n, g;
  fin>>n>>g;

  vector<int> w(n+1), p(n+1);
  for (int i=1; i<=n; ++i) fin>>w[i]>>p[i];

  vector<int> dp(g+1);
  for (int i=1; i<=n; ++i) {
    for (int j=g; j>0; --j) {
      if (j>=w[i]) dp[j] = max(dp[j], p[i]+dp[j-w[i]]);
    }
  }

  fout<<dp[g];
}