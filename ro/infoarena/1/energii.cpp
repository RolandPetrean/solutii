// https://infoarena.ro/problema/energii
#include <bits/stdc++.h>
using namespace std;

ifstream fin("energii.in");
ofstream fout("energii.out");

int main() {
  int g, w;
  fin>>g>>w;

  vector<int> e(g+1), p(g+1);
  for (int i=1; i<=g; ++i) {
    fin>>e[i]>>p[i];
  }

  vector<int> dp(w+1, -1);
  dp[0] = 0;
  for (int i=1; i<=g; ++i) {
    for (int j=w-1; j>=0; --j) {
      if (dp[j]==-1) continue;

      int k=min(w, j+e[i]);
      if (dp[k] == -1) dp[k] = dp[j]+p[i];
      else dp[k] = min(dp[k], p[i]+dp[j]);
    }
  }

  fout<<dp[w];
}