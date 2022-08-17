// https://www.varena.ro/problema/sao
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("sao.in");
ofstream fout("sao.out");

int main() {
  int n, m;
  fin>>n;

  int minr=0, minf=0;
  for (int i=0; i<n; ++i) {
    int r, f;
    fin>>r>>f;
    minr += r;
    minf += f;
  }

  fin>>m;
  int minc=INT_MAX;
  for (int i=0; i<m; ++i) {
    int r, f, c;
    fin>>r>>f>>c;
    if (r >= minr && f >= minf) minc = min(minc, c);
  }
  fout<<minc;
}