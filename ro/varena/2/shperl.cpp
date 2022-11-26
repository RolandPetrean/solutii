// https://www.varena.ro/problema/shperl
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("shperl.in");
ofstream fout("shperl.out");

struct Nod {
  int b[2];
  bool lazy=false;
};

const int MAXN=1200000;
Nod a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) {
    char c;
    fin>>c;
    ++a[nod].b[c-'0'];
  } else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod].b[0] = a[2*nod].b[0]+a[2*nod+1].b[0];
    a[nod].b[1] = a[2*nod].b[1]+a[2*nod+1].b[1];
  }
}

void push(int nod) {
  if (a[nod].lazy) {
    a[nod].lazy = false;

    a[2*nod].lazy = !a[2*nod].lazy;
    a[2*nod+1].lazy = !a[2*nod+1].lazy;
    swap(a[2*nod].b[0], a[2*nod].b[1]);
    swap(a[2*nod+1].b[0], a[2*nod+1].b[1]);
  }
}

void update(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) {
    swap(a[nod].b[0], a[nod].b[1]);
    a[nod].lazy = !a[nod].lazy;
    return;
  }

  int mid=(l+r)/2;
  if (ql<=mid) update(2*nod, l, mid, ql, qr);
  if (mid<qr) update(2*nod+1, mid+1, r, ql, qr);
  push(nod);
  a[nod].b[0] = a[2*nod].b[0]+a[2*nod+1].b[0];
  a[nod].b[1] = a[2*nod].b[1]+a[2*nod+1].b[1];
}

int query(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) return a[nod].b[1];

  int mid=(l+r)/2, sum=0;
  push(nod);
  if (ql<=mid) sum += query(2*nod, l, mid, ql, qr);
  if (mid<qr) sum += query(2*nod+1, mid+1, r, ql, qr);

  return sum;
}

int main() {
  int n, q;
  fin>>n>>q;

  build(1, 1, n);

  for (int i=0; i<q; ++i) {
    int t, x, y;
    fin>>t>>x>>y;

    if (t==1) update(1, 1, n, x, y);
    else fout<<query(1, 1, n, x, y)<<endl;
  }
}