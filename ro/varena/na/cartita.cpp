// https://www.varena.ro/problema/cartita
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cartita.in");
ofstream fout("cartita.out");

const int MAXN=100005;
int h[MAXN], k1[MAXN], k2[MAXN], r[17][MAXN], e[MAXN];

int main() {
  int n, u, q;
  fin>>n;

  for (int i=1; i<=n; ++i) fin>>h[i];

  fin>>u;
  int tx=0;
  for (int i=0; i<u; ++i) {
    int pos, x, k;
    fin>>pos>>x>>k;
    tx += x;
    k1[pos+1] += k;
    k2[pos-1] += k;
  }

  int curr=0, s=0;
  for (int i=1; i<=n; ++i) {
    curr += k1[i];
    s += curr;
    k1[i] = s;
  }
  curr = 0; s = 0;
  for (int i=n; i>=1; --i) {
    curr += k2[i];
    s += curr;
    k2[i] = s;
  }

  for (int i=1; i<=n; ++i) r[0][i] += h[i] + tx + k1[i] - k2[i];

  for (int p=1; (1<<p)<=n; ++p) {
    for (int i=1; i<=n; ++i) {
      int j=i+(1<<(p-1));
      r[p][i] = r[p-1][i];
      if (j <= n && r[p][i] > r[p-1][j]) r[p][i] = r[p-1][j];
    }
  }
  e[1] = 0;
  for (int i=2; i<=n; ++i) e[i] = e[i/2]+1;

  fin>>q;
  for (int i=0; i<q; ++i) {
    int a, b;
    fin>>a>>b;
    int curr=e[b-a+1];
    fout<<min(r[curr][a], r[curr][b-(1<<curr)+1])<<endl;
  }
}