// https://infoarena.ro/problema/div3
#include <bits/stdc++.h>
using namespace std;

ifstream fin("div3.in");
ofstream fout("div3.out");

const int MOD=4001;

int main() {
  int n, k;
  fin>>n>>k;

  // dp[i][j] - numarul de numere cu j cifre care au restul i
  // dp[i][j] = Σ(3, x=0) dp[x][j-1] * dp[(i-x+3)%3][1] pentru i>1
  // raspunsul va fi dp[0][k]
  vector<vector<int>> dp(3, vector<int>(k+1));
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    ++dp[x%3][1];
  }

  for (int j=2; j<=k; ++j) {
    for (int i=0; i<3; ++i) {
      for (int x=0; x<3; ++x) {
        dp[i][j] += dp[x][j-1]*dp[(i-x+3)%3][1];
        dp[i][j] %= MOD;
      }
    }
  }

  fout<<dp[0][k];
}