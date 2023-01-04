// https://www.nerdarena.ro/problema/sir2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("sir2.in");
ofstream fout("sir2.out");

#define int long long
const int MOD=104729;

int fact(int n) {
  return (n ? (n*fact(n-1))%MOD : 1);
}

int modinv(int a) {
  int res=1, b=MOD-2;
  while (b) {
    if (b&1) res = res*a%MOD;
    a = a*a%MOD;
    b >>= 1;
  }
  return res;
}

signed main() {
  int n, m;
  fin>>n>>m;

  --n; --m;
  fout<<n-m+1<<endl<<(fact(n) * modinv(fact(m)) * modinv(fact(n-m))) % MOD;
}