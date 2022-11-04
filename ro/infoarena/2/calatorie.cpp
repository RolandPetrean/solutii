// https://infoarena.ro/problema/calatorie
#include <bits/stdc++.h>
#define INF 1e18
using namespace std;

ifstream fin("calatorie.in");
ofstream fout("calatorie.out");

inline long long pow4(long long n) {
  return n*n*n*n;
}

int main() {
  int t;
  fin>>t;

  while (t--) {
    int n;
    fin>>n;
    --n;

    vector<long long> nk(n+1), hk(n+1), sumhk(n+1);
    for (int i=1; i<=n; ++i) {
      fin>>nk[i]>>hk[i];
      sumhk[i] = hk[i]+sumhk[i-1];
    }

    // dp[i][j] - nr optim de combustibil de la planeta 1 la i cu 
    // j unitati de timp superviteza
    vector<vector<long long>> dp(n+1, vector<long long>(sumhk[n]+1, INF));
    dp[0][0] = 0;
    for (int i=1; i<=n; ++i) {
      for (int j=0; j<=sumhk[i]; ++j) {
        dp[i][j] = dp[i-1][j] + nk[i];
        if (j>=hk[i]) dp[i][j] = min(dp[i][j], dp[i-1][j-hk[i]] - pow4(j-hk[i]) + pow4(j));
      }
    }

    long long t=INF;
    for (int i=0; i<=sumhk[n]; ++i) t = min(t, dp[n][i]);
    fout<<"Consumul minim = "<<t<<"."<<endl;
  }
}