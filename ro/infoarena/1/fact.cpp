// https://www.infoarena.ro/problema/fact
#include <bits/stdc++.h>
using namespace std;

ifstream fin("fact.in");
ofstream fout("fact.out");

long long cntZeros(long long n) {
  long long z=0;
  while (n>0) {
    z += n/5;
    n /= 5;
  }
  return z;
}

int main() {
  int p;
  fin>>p;
  if (p==0) {
    fout<<1;
    return 0;
  }

  long long l=0, r=10e15, mid, res=-1;
  while (l<=r) {
    mid = l+(r-l)/2;
    long long z=cntZeros(mid);
    if (z<p) l=mid+1;
    else if (z>p) r=mid-1;
    else {
      r=mid-1;
      res = mid;
    }
  }
  fout<<res;
}