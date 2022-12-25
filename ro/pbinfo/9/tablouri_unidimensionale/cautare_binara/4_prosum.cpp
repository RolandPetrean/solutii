// https://www.pbinfo.ro/probleme/3775/prosum
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("prosum.in");
ofstream fout("prosum.out");

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

int largep(int x, int y, int m) {
  x %= m;
  int res=0;
  while (y>0) {
    if (y&1) res = (res+x)%m;
    x = (x+x)%m;
    y >>= 1;
  }
  return res;
}

signed main() {
  int n, m;
  fin>>n>>m;

  vector<int> a(n);
  for (int i=0; i<n; ++i) {
    fin>>a[i];
    a[i] %= m;
  }

  int cnt=0;
  map<int,int> ap{};
  for (int i=n-1; i>=0; --i) {
    int x=a[i], inv, b;
    if (egcd(x+1, m, inv, b) != 1) continue;
    inv = (inv%m+m)%m;
    int y=(largep(-x, inv, m)+m)%m;

    cnt += ap[y];
    ++ap[x];
  }

  fout<<cnt;
}