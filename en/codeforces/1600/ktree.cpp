// https://codeforces.com/problemset/problem/431/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MOD=1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k, d;
  cin>>n>>k>>d;

  // dp[i] - ways to get sum i with numbers 1..k
  // dpd[i] - ways to get sum i with numbers 1..k excluding ones >=d
  vector<int> dp(n+1), dpd(n+1);
  dp[0] = dpd[0] = 1;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=k && j<=i; ++j) {
      dp[i] = (dp[i]+dp[i-j])%MOD;
      if (j<d) dpd[i] = (dpd[i]+dpd[i-j])%MOD;
    }
  }
  cout<<(dp[n]-dpd[n]+MOD)%MOD;
}