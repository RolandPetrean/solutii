// https://www.pbinfo.ro/probleme/3731/tunel2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("tunel2.in");
ofstream fout("tunel2.out");

int main() {
  int c, n, m, x;
  fin>>c>>n>>m>>x;

  vector<vector<bool>> p(n-1, vector<bool>(m));
  for (int i=0; i<n-1; ++i) {
    int nr, y;
    fin>>nr;
    for (int j=0; j<nr; ++j) {
      fin>>y;
      --y;
      p[i][y]=1;
    }
  }

  if (c==1) {
    int i=--x;
    for (int j=0; j<m; ++j) {
      if (i<n-1) {
        if (p[i][j]) ++i;
        else if (i>0 && p[i-1][j]) --i;
      } else if (j!=m-1 && p[i-1][j]) --i;
    }
    fout<<i+1;
  } else {
    // Stiu, foarte urat codul aici, dar ma grabeam
    int i=n-1, t=0;
    for (int j=m-2; j>=0; --j) {
      ++t;
      if (i<n-1) {
        if (p[i][j]) {
          ++i;
          t+=2;
        }
        else if (i>0 && p[i-1][j]) {
          --i;
          t+=2;
        }
      } else if (j!=m-1 && p[i-1][j]) {
        --i;
        t+=2;
      }
    }
    int o1=t+1, o2=INT_MAX;
    
    if (p[n-2][m-1]) {
      int i=n-2, t=0;
      for (int j=m-2; j>=0; --j) {
        ++t;
        if (i<n-1) {
          if (p[i][j]) {
            ++i;
            t+=2;
          }
          else if (i>0 && p[i-1][j]) {
            --i;
            t+=2;
          }
        } else if (j!=m-1 && p[i-1][j]) {
          --i;
          t+=2;
        }
      }
      o2 = t+3;
    }

    fout<<min(o1, o2);
  }
}