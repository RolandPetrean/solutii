// https://www.pbinfo.ro/probleme/2091/actualizare-interval-minim-interval
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("aimi.in");
ofstream fout("aimi.out");

#define int long long

struct Nod {
  int val=0;
  bool lazy=false;
};

const int MAXN=400000;
Nod a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) fin>>a[nod].val;
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod].val = min(a[2*nod].val, a[2*nod+1].val);
  }
}

void push(int nod) {
  if (a[nod].lazy) {
    a[nod].lazy = false;
    a[2*nod].lazy = a[2*nod+1].lazy = true;
    a[2*nod].val = a[2*nod+1].val = a[nod].val;
  }
}

void update(int nod, int l, int r, int ql, int qr, int val) {
  if (l >= ql && r <= qr) {
    a[nod].val = val;
    a[nod].lazy = true;
  } else {
    int mid=(l+r)/2;
    push(nod);
    if (ql<=mid) update(2*nod, l, mid, ql, qr, val);
    if (mid<qr) update(2*nod+1, mid+1, r, ql, qr, val);
    a[nod].val = min(a[2*nod].val, a[2*nod+1].val);
  }
}

int query(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) return a[nod].val;

  int mid=(l+r)/2, mini=LONG_LONG_MAX;
  push(nod);
  if (ql <= mid) mini = min(mini, query(2*nod, l, mid, ql, qr));
  if (mid<qr) mini = min(mini, query(2*nod+1, mid+1, r, ql, qr));

  return mini;
}

signed main() {
  int n, m;
  fin>>n;

  build(1, 1, n);

  fin>>m;
  for (int i=0; i<m; ++i) {
    int op, a, b;
    fin>>op>>a>>b;

    if (op==1) fout<<query(1, 1, n, a, b)<<endl;
    else {
      int x;
      fin>>x;
      update(1, 1, n, a, b, x);
    }
  }
}