// https://www.pbinfo.ro/probleme/695/sumall
// 30p ca n-am chef sa impl nr mari
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("sumall.in");
ofstream fout("sumall.out");

#define int long long

const int MAXF=20;
int f[MAXF];

void fact() {
  f[0] = 1;
  for (int i=1; i<MAXF; ++i) f[i] = i*f[i-1];
}

signed main() {
  string n;
  fin>>n;

  fact();

  array<int,10> ap{};
  for (int i=0; i<n.size(); ++i) ++ap[n[i]-'0'];

  int s=0;
  for (int i=0; i<10; ++i) {
    if (!ap[i]) continue;

    int x=f[n.size()-1];
    if (ap[i]-1) x /= f[ap[i]-1];
    for (int j=0; j<10; ++j) {
      if (i==j) continue;
      if (ap[j]) x /= f[ap[j]];
    }

    int t=1;
    for (int j=0; j<n.size(); ++j) {
      s += t*i*x;
      t *= 10;
    }
  }

  fout<<s;
}