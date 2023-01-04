// https://codeforces.com/problemset/problem/846/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m, k, q;
  cin>>n>>m>>k>>q;

  vector<pair<int,pair<int,int>>> qs(q);
  for (int i=0; i<q; ++i) cin>>qs[i].second.first>>qs[i].second.second>>qs[i].first;
  sort(qs.begin(), qs.end());

  int l=0, r=q-1, ans=-1;
  while (l <= r) {
    int mid = (l+r)/2;

    // check if there is a square of size k x k
    int maxl=0;
    vector<vector<int>> dp(n+2, vector<int>(m+2));
    for (int i=0; i<=mid; ++i) dp[qs[i].second.first][qs[i].second.second] = 1;
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) {
        if (dp[i][j]) dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]))+1;
        maxl = max(maxl, dp[i][j]);
      }
    }

    if (maxl >= k) {
      ans = mid;
      r = mid-1;
    } else l = mid+1;
  }

  cout<<(ans==-1?-1:qs[ans].first)<<endl;
}