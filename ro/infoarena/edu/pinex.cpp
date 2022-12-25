// https://www.infoarena.ro/problema/pinex
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("pinex.in");
ofstream fout("pinex.out");

#define int long long

const int MAXB=1000000;
vector<int> p{};

void ciur() {
  bitset<MAXB> c;
  for (int i=2; i*i<MAXB; ++i) {
    if (!c[i]) for (int j=i*i; j<MAXB; j+=i) c[j] = true;
  }

  for (int i=2; i<MAXB; ++i) {
    if (!c[i]) p.push_back(i);
  }
}

int solve(int a, int b) {
  vector<int> div;
  for (int d=0; d<p.size() && p[d]*p[d]<=b; ++d) { 
    if (b%p[d]==0) {
      while (b%p[d]==0) b /= p[d];
      div.push_back(p[d]);
    }
  }
  if (b>1) div.push_back(b);
  int n=div.size();

  int s=0;
  for (int i=1; i<(1<<n); ++i) {
    int p=(__builtin_popcount(i)&1 ? 1 : -1);
    for (int j=0; j<n; ++j) {
      if (i&(1<<j)) p *= div[j];
    }
    s += a/p;
  }

  return a-s;
}

signed main() {
  int m;
  fin>>m;

  ciur();

  while (m--) {
    int a, b;
    fin>>a>>b;
    fout<<solve(a, b)<<endl;
  }
}