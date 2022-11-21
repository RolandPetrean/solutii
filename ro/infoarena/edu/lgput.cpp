// https://www.infoarena.ro/problema/lgput
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("lgput.in");
ofstream fout("lgput.out");

const long long MOD = 1999999973;

long long binpow(long long a, long long b) {
  long long res=1;
  while (b>0) {
    if (b&1) res = (res*a)%MOD;
    a = (a*a)%MOD;
    b >>= 1;
  }
  return res;
}

int main() {
  long long n, p;
  fin>>n>>p;
  fout<<binpow(n, p);
}