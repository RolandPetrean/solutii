// https://www.pbinfo.ro/probleme/2432/cruce
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cruce.in");
ofstream fout("cruce.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<vector<int>> s(n+2, vector<int>(n+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      fin>>s[i][j];
      s[i][j] += s[i-1][j]+s[i][j-1]-s[i-1][j-1];
    }
  }

  int vmax=INT_MIN, lmax=0, cmax=0;
  for (int i=1; i<=n-k+1; ++i) {
    int linsum = s[i+k-1][n] - s[i-1][n];
    for (int j=1; j<=n-k+1; ++j) {
      int colsum = s[n][j+k-1] - s[n][j-1];
      int intersection = -s[i+k-1][j+k-1] + s[i+k-1][j-1] + s[i-1][j+k-1] - s[i-1][j-1];
      int sum = linsum + colsum + intersection;

      if (sum>vmax) {
        vmax = sum; lmax = i; cmax = j;
      }
    }
  }
  fout<<vmax<<" "<<lmax<<" "<<cmax;;
}