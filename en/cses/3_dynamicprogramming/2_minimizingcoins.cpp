// https://cses.fi/problemset/task/1634
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, x;
  cin>>n>>x;

  vector<ll> c(n);
  for (ll i=0; i<n; ++i) cin>>c[i];

  vector<ll> dp(x+1,1e9);
  dp[0] =0;
  for (ll i=1; i<=x; ++i) {
    for (auto v : c) {
      if (i-v >= 0) dp[i] = min(dp[i], dp[i-v]+1);
    }
  }

  cout<<(dp[x] == 1e9 ? -1 : dp[x]);
}