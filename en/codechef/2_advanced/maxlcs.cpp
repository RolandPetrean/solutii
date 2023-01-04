// https://www.codechef.com/START71B/problems/MAXLCS
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    string s;
    cin>>n>>s;

    string a=s, b=s;
    reverse(b.begin(), b.end());
    a = '$'+a; b = '$'+b;

    vector<vector<int>> dp(n+2, vector<int>(n+2));
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=n; ++j) {
        if (a[i]==b[j]) dp[i][j] = dp[i-1][j-1]+1;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }

    int maxl=0;
    for (int i=1; i<=n; ++i) {
      maxl = max(maxl, dp[i][n-i]);
    }

    cout<<maxl<<endl;
  }
}