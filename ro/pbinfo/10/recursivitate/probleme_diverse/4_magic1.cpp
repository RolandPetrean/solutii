// https://www.pbinfo.ro/probleme/1223/magic1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("magic1.in");
ofstream fout("magic1.out");

#define int long long

int binpow(int a, int b, int m) {
  int res=1;
  while (b) {
    if (b&1) res = (res*a)%m;
    a = (a*a)%m;
    b >>= 1;
  }
  return res;
}

signed main() {
  int c, n, p;
  fin>>c>>n>>p;

  int r=binpow(c, n-1, p);
  if (r==0) fout<<p;
  else fout<<r;
}