// https://codeforces.com/problemset/problem/453/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

double binpow(double a, int b) {
  double res=1;
  while (b) {
    if (b&1) res *= a;
    a *= a;
    b /= 2;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double m;
  int n;
  cin>>m>>n;

  double s=0;
  for (int i=1; i<=m; ++i) {
    s += i*(binpow(i/m, n) - binpow((i-1)/m, n));
  }
  cout<<fixed<<setprecision(10)<<s;
}