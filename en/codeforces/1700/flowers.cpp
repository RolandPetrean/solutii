// https://codeforces.com/problemset/problem/474/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MAXN=200002, MOD=1000000007;
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, k;
  cin>>t>>k;
  
  // 0 - white
  // 1 - red
  // dp[i][j] - how many ways can he eat i flowers with the last one being of type j
  vector<vector<int>> dp(MAXN, vector<int>(2));
  dp[1][1] = dp[k][0] = 1;
  for (int i=1; i<MAXN/2; ++i) {
    dp[i+k][0] = (dp[i+k][0]+dp[i][0]+dp[i][1])%MOD;
    dp[i+1][1] = (dp[i+1][1]+dp[i][0]+dp[i][1])%MOD;
  }

  vector<int> s(MAXN);
  for (int i=1; i<MAXN; ++i) s[i] = (s[i-1]+dp[i][0]+dp[i][1])%MOD;

  while (t--) {
    int a, b;
    cin>>a>>b;
    cout<<(s[b]-s[a-1]+MOD)%MOD<<endl;
  }
}