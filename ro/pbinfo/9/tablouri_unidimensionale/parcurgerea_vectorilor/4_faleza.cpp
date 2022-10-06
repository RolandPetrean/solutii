// https://www.pbinfo.ro/probleme/2045/faleza
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("faleza.in");
ofstream fout("faleza.out");

int f[2][100001], dp[2][100001];

int main() {
  int n;
  fin>>n;

  for (int i=0; i<2; ++i) {
    for (int j=0; j<n; ++j) {
      fin>>f[i][j];
      f[i][j] = !f[i][j];
    }
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<2; ++j) {
      dp[j][i] = f[j][i];
      dp[j][i] += min(dp[j][i-1], dp[1-j][i-1]+f[1-j][i]);
    }
  }
  fout<<min(dp[0][n-1], dp[1][n-1]);
}