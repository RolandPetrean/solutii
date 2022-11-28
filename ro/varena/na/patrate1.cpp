// https://www.varena.ro/problema/patrate1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("patrate1.in");
ofstream fout("patrate1.out");

int main() {
  int n;
  fin>>n;

  vector<vector<int>> s(n+2, vector<int>(n+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      char c;
      fin>>c;
      s[i][j] = s[i-1][j]+s[i][j-1]-s[i-1][j-1] + (c-'0');
    }
  }

  int cnt=0;
  for (int l=1; l<=n; ++l) {
    for (int i=1; i<=n-l+1; ++i) {
      for (int j=1; j<=n-l+1; ++j) {
        cnt += (s[i+l-1][j+l-1]-s[i+l-1][j-1]-s[i-1][j+l-1]+s[i-1][j-1] == l*l);
      }
    }
  }

  fout<<cnt;
}