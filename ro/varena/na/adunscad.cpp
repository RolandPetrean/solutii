// https://www.varena.ro/problema/adunscad
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("adunscad.in");
ofstream fout("adunscad.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<int> a(m);
  for (int i=0; i<m; ++i) fin>>a[i];

  for (int mask=0; mask<(1<<m); ++mask) {
    int s=0;
    for (int i=0; i<m; ++i) {
      if (mask&(1<<i)) s -= a[i];
      else s += a[i];
    }
    
    if (s==n) {
      for (int i=0; i<m; ++i) {
        if (mask&(1<<i)) fout<<"-";
        else if (i>0) fout<<"+";
        fout<<a[i];
      }
      return 0;
    }
  }
  fout<<0;
}