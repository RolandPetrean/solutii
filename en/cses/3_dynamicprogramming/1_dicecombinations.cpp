// https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  // dp[i] = dp[i-1], dp[i-2], ..., dp[i-6]
  vector<int> dp(n+1);
  dp[0] = 1;
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=6 && i-j>=0; j++) {
      dp[i] += dp[i-j];
      dp[i] %= mod; // modular addition ez
    }
  }

  cout<<dp[n];
}