// https://www.varena.ro/problema/patrate1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("patrate1.in");
ofstream fout("patrate1.out");

int main() {
  int n;
  fin>>n;

  vector<vector<int>> p(n, vector<int>(n));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      char c;
      fin>>c;
      p[i][j] = c-'0';

      if (i==0 && j!=0) p[i][j] += p[i][j-1];
      else if (j==0 && i!=0) p[i][j] += p[i-1][j];
      else if (i!=0 && j!=0) p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1];
    }
  }

  int t=0;
  for (int k=0; k<n; ++k) {
    for (int i=0; i<n-k; ++i) {
      for (int j=0; j<n-k; ++j) {
        int s;
        if (i==0 && j==0) s = p[i+k][j+k];
        else if (i==0 && j!=0) s = (p[i+k][j+k] - p[i+k][j-1]);
        else if(j==0 && i!=0) s = (p[i+k][j+k] - p[i-1][j+k]);
        else s = (p[i+k][j+k] - p[i+k][j-1] - p[i-1][j+k] + p[i-1][j-1]);
        if (s == (k+1)*(k+1)) ++t;
      }
    }
  }
  fout<<t;
}