// https://www.varena.ro/problema/sclm
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("sclm.in");
ofstream fout("sclm.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<char> a(n+1), b(m+1);
  for (int i=1; i<=n; ++i) fin>>a[i];
  for (int i=1; i<=m; ++i) fin>>b[i];

  pair<int,pair<int,int>> best{};
  vector<vector<int>> dp(n+1, vector<int>(m+1));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      dp[i][j] = (a[i] == b[j]) ? dp[i-1][j-1]+1 : 0;
      best = max(best, {dp[i][j], {i-dp[i][j]+1, j-dp[i][j]+1}});
    }
  }

  fout<<best.first<<" "<<best.second.first<<" "<<best.second.second;
}