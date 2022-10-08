// https://www.pbinfo.ro/probleme/3728/campionat2
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("campionat.in");
ofstream fout("campionat.out");

int main() {
  int t, n, d;
  fin>>t>>n;
  vector<int> e(n);
  for (int i=0; i<n; ++i) fin>>e[i];
  fin>>d;

  vector<int> m(n);
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<d; ++i) {
    int x, y;
    fin>>x>>y;
    --x; --y;
    if (a[x][y]) continue;
    ++m[x];
    ++m[y];
    ++a[x][y];
    ++a[y][x];
  }
  
  if (t==1) {
    for (int i=0; i<n; ++i) e[i] += m[i];

    int maxi=-1;
    vector<int> l;
    for (int i=0; i<n; ++i) {
      if (e[i] > maxi) {
        maxi = e[i];
        l = {i+1};
      } else if (e[i] == maxi) l.push_back(i+1);
    }

    for (auto v : l) fout<<v<<" ";
  } else {
    vector<long long> camp;
    for (int i=0; i<n; ++i) {
      vector<int> c=e;
      c[i] += m[i]*3;
      for (int j=0; j<n; ++j) {
        if (j != i) c[j] += 3*m[j]-3*a[i][j];
      }

      bool ok=true;
      for (int j=0; j<n; ++j) {
        if (j != i && c[j] >= c[i]) ok = false;
      }
      if (ok) camp.push_back(i+1);
    }
    if (camp.size() == 0) fout<<0;
    else for (auto v : camp) fout<<v<<" ";
  }
}