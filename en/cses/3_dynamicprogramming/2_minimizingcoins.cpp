// https://cses.fi/problemset/task/1634
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  vector<int> c(n);
  for (int i=0; i<n; ++i) cin>>c[i];

  vector<int> dp(x+1,1e9);
  dp[0] =0;
  for (int i=1; i<=x; ++i) {
    for (auto v : c) {
      if (i-v >= 0) dp[i] = min(dp[i], dp[i-v]+1);
    }
  }

  cout<<(dp[x] == 1e9 ? -1 : dp[x]);
}