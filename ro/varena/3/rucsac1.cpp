// https://www.varena.ro/problema/rucsac1
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("rucsac1.in");
ofstream fout("rucsac1.out");

int main() {
  int n, g;
  fin>>n>>g;

  vector<int> w(n+1), p(n+1);
  for (int i=1; i<=n; ++i) {
    fin>>w[i];
    fin>>p[i];
  }

  vector<int> dp(g+1);
  for (int i=1; i<=n; ++i) {
    for (int j=g; j>0; --j) {
      if (j>=w[i]) {
        dp[j] = max(dp[j], dp[j-w[i]]+p[i]);
      }
    }
  }
  fout<<dp[g];
}