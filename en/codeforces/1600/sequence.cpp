// https://codeforces.com/problemset/problem/1741/E
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    // dp[i] - can the sequence 0..i be sent over the network?
    vector<bool> dp(n+1);
    dp[0] = true;

    vector<int> b(n+1);
    for (int i=1; i<=n; ++i) {
      cin>>b[i];
      if (i+b[i]<=n && dp[i-1]) dp[i+b[i]] = true;
      if (i-b[i]>0 && dp[i-b[i]-1]) dp[i] = true;
    }

    if (dp[n]) cout<<"YES\n";
    else cout<<"NO\n";
  }
}