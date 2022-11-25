// https://www.varena.ro/problema/asort
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("asort.in");
ofstream fout("asort.out");

inline int modulo(int n, int m) {
  return (n+m)%m;
}

int asort(int n, int r, int k) {
  if ((k&1)^(r&1)) return modulo(k+r, n)+1;
  else return modulo(k-r, n)+1;
}

int main() {
  int P, n, r, k, t;
  fin>>P>>n>>r>>k>>t;
  --k; --t;

  r %= n;
  if (P==1) fout<<asort(n, r, k);
  else {
    int poz;
    if (t&1) poz = modulo(t-r, n);
    else poz = modulo(t+r, n);
    fout<<asort(n, r, modulo(poz-1, n))<<" "<<asort(n, r, modulo(poz+1, n));
  }
}