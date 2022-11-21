// https://www.pbinfo.ro/probleme/2259/dinamica01
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MOD=30103;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  if (n==1) {
    cout<<10;
    return 0;
  }

  vector<vector<int>> dp(2, vector<int>(n+1));
  dp[0][1] = 4;
  dp[1][1] = 5;
  for (int i=2; i<=n; ++i) {
    dp[0][i] = (4*dp[1][i-1])%MOD;
    dp[1][i] = (5*dp[0][i-1])%MOD;
  }

  cout<<(dp[0][n]+dp[1][n])%MOD;
}