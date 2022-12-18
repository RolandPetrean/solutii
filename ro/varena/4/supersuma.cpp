// https://www.varena.ro/problema/supersuma
#include <bits/stdc++.h>
using namespace std;

ifstream fin("supersuma.in");
ofstream fout("supersuma.out");

inline long long gauss(int x) {
  return 1LL*x*(x+1)/2;
}

long long supersuma(int n) {
  long long s=0;
  for (int i=1; i*i<=n; ++i) {
    s += gauss(n/i)-gauss(i-1)+i*(n/i-i);
  }
  return s;
}

int main() {
  long long k;
  fin>>k;

  int l=0, r=(1<<30), rez;
  while (l<=r) {
    int mid = (l+r)/2;
    if (supersuma(mid)<k) l = mid+1;
    else {
      rez = mid;
      r = mid-1;
    }
  }
  fout<<rez;
}