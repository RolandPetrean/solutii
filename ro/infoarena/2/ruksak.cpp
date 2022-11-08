// https://infoarena.ro/problema/ruksak
#include <bits/stdc++.h>
using namespace std;

ifstream fin("ruksak.in");
ofstream fout("ruksak.out");

vector<int> a[3001];
int dp[3001];

int main() {
  int n, g;
  fin>>n>>g;

  for (int i=1; i<=n; ++i) {
    int w, p;
    fin>>w>>p;
    a[w].push_back(p);
  }
  for (int i=0; i<3001; ++i) sort(a[i].begin(), a[i].end());

  for (int i=1; i<=g; ++i) {
    for (int j=0; j<a[i].size() && j<g/i; ++j) {
      for (int k=g; k>=i; --k) dp[k] = max(dp[k], dp[k-i]+a[i][j]);
    }
  }

  for (int i=0; i<a[0].size(); ++i) dp[g] += a[0][i];
  fout<<dp[g];
}