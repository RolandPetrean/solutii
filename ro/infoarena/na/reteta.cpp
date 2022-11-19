// https://infoarena.ro/problema/reteta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("reteta.in");
ofstream fout("reteta.out");

int main() {
  int n, m;
  fin>>n>>m;
  
  vector<bool> c(m);
  vector<vector<int>> r(m);
  for (int i=0; i<m; ++i) {
    int t, q;
    fin>>t>>q;
    c[i] = --t;
    
    for (int j=0; j<q; ++j) {
      int x;
      fin>>x;
      --x;
      r[i].push_back(x);
    }
  }

  vector<double> p(n);
  for (int i=0; i<n; ++i) fin>>p[i];
  
  double ans=5000;
  int pow2=pow(2, m);
  for (int msk=0; msk<pow2; ++msk) {
    double s=0;
    vector<int> aparitii(n);
    for (int i=0; i<m; ++i) {
      if ((1<<i)&msk) {
        for (int j=0; j<r[i].size(); ++j) {
          ++aparitii[r[i][j]];
          s += c[i]?p[r[i][j]]/2.0:p[r[i][j]];
        }
      }
    }

    bool ok=true;
    for (int i=0; i<n && ok; ++i) {
      if (aparitii[i] != 1) ok = false;
    }
    if (!ok) continue;

    ans = min(ans, s);
  }

  fout<<fixed<<setprecision(1)<<ans;
}