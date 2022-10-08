// https://www.varena.ro/problema/cmlsc
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("cmlsc.in");
ofstream fout("cmlsc.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<int> a(n+1), b(m+1);
  for (int i=1; i<=n; ++i) fin>>a[i];
  for (int i=1; i<=m; ++i) fin>>b[i];

  vector<vector<pair<int,int>>> dp(n+1, vector<pair<int,int>>(m+1,{0,-1}));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (a[i] == b[j]) dp[i][j] = {dp[i-1][j-1].first+1, 1};
      else {
        if (dp[i-1][j].first>=dp[i][j-1].first) dp[i][j] = {dp[i-1][j].first, 2};
        else dp[i][j] = {dp[i][j-1].first, 3};
      }
    }
  }

  fout<<dp[n][m].first<<endl;

  stack<int> s;
  int i=n, j=m;
  while (dp[i][j].second != -1) {
    if (dp[i][j].second == 1) {
      s.push(a[i]);
      --i; --j;
    }
    else if (dp[i][j].second == 2) --i;
    else --j;
  }

  while (!s.empty()) {
    fout<<s.top()<<" ";
    s.pop();
  }
}