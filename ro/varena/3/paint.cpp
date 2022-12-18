// https://www.nerdarena.ro/problema/paint
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("paint.in");
ofstream fout("paint.out");

const int MOD=1001;

int binpow2(int b) {
  int a=2, res=1;
  while (b) {
    if (b&1) res = res*a%MOD;
    a = a*a%MOD;
    b /= 2;
  }
  return res;
}

int main() {
  int n, m, q;
  fin>>n>>m;

  vector<vector<int>> a(n+2, vector<int>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      fin>>a[i][j];
      a[i][j] = !a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    }
  }

  fin>>q;
  while (q--) {
    int l1, c1, l2, c2;
    fin>>l1>>c1>>l2>>c2;
    fout<<binpow2(a[l2][c2]-a[l1-1][c2]-a[l2][c1-1]+a[l1-1][c1-1])<<endl;
  }
}