// https://www.pbinfo.ro/probleme/1704/cercetasi
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cercetasi.in");
ofstream fout("cercetasi.out");

int bpow2(int n) {
  int m=1;
  while (m<=n) m *= 2;
  return m/2;
}

int main() {
  int n;
  fin>>n;

  vector<int> a(n+1), f(n+1);
  for (int i=1; i<=n; ++i) {
    fin>>a[i];
    f[a[i]] = i;
  }

  int res=0, m=bpow2((n+1)/2);
  while (m && !res) {
    int i=1, s=0;
    for (i=1; i<=2*m; i+=2) s += i;
    while (s != n && i<=n) {
      s = s+2*m;
      i += 2;
    }
    if (s==n) res = i-2*m;
    else m /= 2;
  }

  fout<<m<<endl;

  int t=0;
  for (int i=0; i<m; ++i) {
    int c=res+2*i;
    fout<<c<<" ";

    if (a[c]!=c) {
      int l=f[c];
      while (l != c) {
        a[l] = l;
        swap(l, f[l]);
        ++t;
      }
      a[l] = l;
      swap(l, f[l]);
      ++t;
    }
  }

  fout<<endl<<t;
}
