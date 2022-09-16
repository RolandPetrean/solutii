// https://www.varena.ro/problema/puteri2
#include <bits/stdc++.h>
using namespace std;
#define MOD 100019

ifstream fin("puteri2.in");
ofstream fout("puteri2.out");

long long fastpow(long long a, long long b, int m) {
  long long res=1;
  while (b>0) {
    if (b&1) res = res*a%m;
    a = a*a%m;
    b /= 2;
  }
  return res;
}

int main() {
  int n;
  fin>>n;

  vector<long long> a(n), b(n);
  for (int i=0; i<n; ++i) fin>>a[i];
  for (int i=0; i<n; ++i) fin>>b[i];

  long long s=0;
  for (int i=0; i<n; ++i) s = (s+fastpow(a[i], b[i], MOD))%MOD;
  fout<<s;
}