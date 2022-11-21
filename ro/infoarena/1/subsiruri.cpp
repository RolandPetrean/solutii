// https://infoarena.ro/problema/subsiruri
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("subsiruri.in");
ofstream fout("subsiruri.out");

const int MOD = 9901;

int main() {
  int n;
  fin>>n;

  vector<int> x(n);
  for (int i=0; i<n; ++i) fin>>x[i];

  vector<int> lg(n+1), dp(n), nr(n);
  for (int i=0; i<n; ++i) {
    int maxi=0, nmax=1;
    for (int j=i-1; j>=0; --j) {
      if (x[j]<x[i]) {
        if (dp[j] > maxi) {
          maxi = dp[j];
          nmax = nr[j]%MOD;
        } else if (dp[j] == maxi) nmax = (nmax+nr[j])%MOD;
      }
    }

    ++maxi;
    nmax %= MOD;
    lg[maxi] = (lg[maxi]+nmax)%MOD;
    dp[i] = maxi;
    nr[i] = nmax;
  }

  for (int i=n; i>=0; --i) {
    if (lg[i]) {
      fout<<i<<endl<<(lg[i])%MOD;
      break;
    }
  }
}