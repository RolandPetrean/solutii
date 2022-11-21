// https://www.pbinfo.ro/probleme/3672/calculeaza-pe-n
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> dp(n+1, INT_MAX);
  dp[1] = 0;
  for (int i=1; i<=n; ++i) {
    if (2*i<=n) dp[2*i] = min(dp[2*i], dp[i]+1);
    if (3*i<=n) dp[3*i] = min(dp[3*i], dp[i]+1);
    if (i+1<=n) dp[i+1] = min(dp[i+1], dp[i]+1);
  }
  cout<<dp[n];
}