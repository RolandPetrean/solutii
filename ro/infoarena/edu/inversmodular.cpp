// https://www.infoarena.ro/problema/inversmodular
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("inversmodular.in");
ofstream fout("inversmodular.out");

#define int long long

int egcd(int a, int b, int& x, int& y) {
  if (b==0) {
    x = 1; y = 0;
    return a;
  }
  int x1, y1;
  int d=egcd(b, a%b, x1, y1);
  x = y1; y = x1-y1*(a/b);
  return d;
}

signed main() {
  int a, n;
  fin>>a>>n;

  int x, y;
  egcd(a, n, x, y);
  fout<<(x%n+n)%n;
}