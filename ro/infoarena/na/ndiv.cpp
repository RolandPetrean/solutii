// https://www.infoarena.ro/problema/ndiv
#include <bits/stdc++.h>
using namespace std;

ifstream fin("ndiv.in");
ofstream fout("ndiv.out");

long long ndiv(int n) {
  long long s=0, i;
  for (i=1; i*i<=n; ++i) s += 2*(n/i-i)+1;
  return s;
}

int main() {
  int a, b;
  fin>>a>>b;
  fout<<ndiv(b)-ndiv(a-1);
}