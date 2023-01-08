// https://codeforces.com/contest/1731/problem/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> a(n+2, vector<int>(m+2));
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) cin>>a[i][j];
    }

    int l=0, r=min(n, m), res=0;
    while (l <= r) {
      int mid=(l+r)/2;

      vector<vector<int>> dp(n+2, vector<int>(m+2));
      int maxl=0;
      for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
          if (a[i][j]>=mid) dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]))+1;
          maxl = max(maxl, dp[i][j]);
        }
      }

      if (maxl<mid) r=mid-1;
      else {
        l = mid+1;
        res = mid;
      }
    }

    cout<<res<<endl;
  }
}