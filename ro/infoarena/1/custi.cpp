// https://www.infoarena.ro/problema/custi
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("custi.in");
ofstream fout("custi.out");

int main() {
  int n;
  fin>>n;

  vector<int> freq(n+2);
  vector<vector<int>> dp(n+1, vector<int>(n+1));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      fin>>dp[i][j];
      if (dp[i][j]) dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
      ++freq[dp[i][j]];
    }
  }
  for (int i=n-1; i>0; --i) freq[i] += freq[i+1];
  for (int i=1; i<=n; ++i) fout<<freq[i]<<endl;
}