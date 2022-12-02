// https://www.varena.ro/problema/cicada
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cicada.in");
ofstream fout("cicada.out");

#define int long long

int phi(int n) {
  int e=n;
  for (int d=2; d*d<=n; ++d) {
    if (n%d==0) {
      while (n%d==0) n /= d;
      e -= e/d;
    }
  }
  if (n>1) e -= e/n;
  return e;
}

signed main() {
  int n;
  fin>>n;
  fout<<n*(n-1-phi(n))/2;
}