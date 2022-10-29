// https://infoarena.ro/problema/nrcuv
#include <bits/stdc++.h>
using namespace std;

ifstream fin("nrcuv.in");
ofstream fout("nrcuv.out");

int main() {
  int n, m;
  fin>>n>>m;

  array<array<bool,26>,26> b{};
  for (int i=0; i<m; ++i) {
    char l1, l2;
    fin>>l1>>l2;
    b[l1-'a'][l2-'a'] = b[l2-'a'][l1-'a'] = true;
  }

  // dp[i][j] - nr de secvente de lungime i care se termina cu j mod 104659
  vector<array<int,26>> dp(n+1, array<int,26>{});
  for (int i=0; i<26; ++i) dp[1][i] = 1;
  for (int i=2; i<=n; ++i) {
    for (int j=0; j<26; ++j) {
      for (int k=0; k<26; ++k) {
        if (!b[k][j]) dp[i][j] += dp[i-1][k];
        dp[i][j] %= 104659;
      }
    }
  }

  int s=0;
  for (int j=0; j<26; ++j) {
    s += dp[n][j];
    s %= 104659;
  }
  fout<<s;
}