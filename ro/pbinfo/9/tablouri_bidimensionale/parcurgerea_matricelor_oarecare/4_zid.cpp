// https://www.pbinfo.ro/probleme/3766/zid
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("zid.in");
ofstream fout("zid.out");

int main() {
  int n, m, cm;
  fin>>n>>m>>cm;

  vector<vector<int>> z(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      fin>>z[i][j];
    }
  }

  vector<vector<vector<int>>> f(n, vector<vector<int>>(m, vector<int>(cm+1)));
  for (int k=0; k<=cm; ++k) {
    f[0][0][k] = (z[0][0] == k);
    for (int i=1; i<n; ++i) f[i][0][k] = f[i-1][0][k] + (z[i][0] == k);
    for (int j=1; j<m; ++j) f[0][j][k] = f[0][j-1][k] + (z[0][j] == k);
  }
  for (int i=1; i<n; ++i) {
    for (int j=1; j<m; ++j) {
      for (int k=0; k<=cm; ++k) {
        f[i][j][k] = f[i-1][j][k] + f[i][j-1][k] - f[i-1][j-1][k] + (z[i][j] == k);
      }
    }
  }
  
  for (int l=min(n,m)-1; l>=0; --l) {
    for (int i=0; i<n-l; ++i) {
      for (int j=0; j<m-l; ++j) {
        bool ok=true;
        int s=-1;
        for (int k=0; k<=cm; ++k) {
          int x;
          if (i==0 && j==0) x = f[i+l][j+l][k];
          else if (i==0) x = f[i+l][j+l][k] - f[i+l][j-1][k];
          else if (j==0) x = f[i+l][j+l][k] - f[i-1][j+l][k];
          else x = f[i+l][j+l][k] - f[i-1][j+l][k] - f[i+l][j-1][k] + f[i-1][j-1][k];
          if (x==0) continue;
          else {
            if (s == -1) s = x;
            else if (x != s) {
              ok=false;
              break;
            }
          }
        }
        if (!ok) continue;

        ++l; ++i; ++j;
        fout<<l*l<<" "<<i<<" "<<j;
        return 0;
      }
    }
  }
}