// https://www.pbinfo.ro/probleme/3759/cartita
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("cartita.in");
ofstream fout("cartita.out");

const int MAXN=100005;
int h[MAXN], k1[MAXN], k2[MAXN], a[4*MAXN];

void build(int nod, int l, int r) {
  if (l==r) a[nod] = h[l];
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod] = min(a[2*nod], a[2*nod+1]);
  }
}

int query(int nod, int l, int r, int ql, int qr) {
  if (l>=ql && r<=qr) return a[nod];

  int mid=(l+r)/2, mini=INT_MAX;
  if (ql<=mid) mini = min(mini, query(2*nod, l, mid, ql, qr));
  if (mid<qr) mini = min(mini, query(2*nod+1, mid+1, r, ql, qr));

  return mini;
}

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

  for (int i=1; i<=n; ++i) h[i] += tx + k1[i] - k2[i];
  build(1, 1, n);

  fin>>q;
  for (int i=0; i<q; ++i) {
    int l, r;
    fin>>l>>r;
    fout<<query(1, 1, n, l, r)<<endl;
  }
}