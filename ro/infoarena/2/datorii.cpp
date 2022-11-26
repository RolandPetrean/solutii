// https://www.infoarena.ro/problema/datorii
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("datorii.in");
ofstream fout("datorii.out");

const int MAXN=60000;
int a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) fin>>a[nod];
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod] = a[2*nod]+a[2*nod+1];
  }
}

void update(int nod, int l, int r, int pos, int val) {
  if (l==r) a[nod] -= val;
  else {
    int mid=(l+r)/2;
    if (pos<=mid) update(2*nod, l, mid, pos, val);
    else update(2*nod+1, mid+1, r, pos, val);
    a[nod] = a[2*nod]+a[2*nod+1];
  }
}

int query(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) return a[nod];
  
  int mid = (l+r)/2, s=0;
  if (ql<=mid) s += query(2*nod, l, mid, ql, qr);
  if (mid<qr) s += query(2*nod+1, mid+1, r, ql, qr);

  return s;
}

int main() {
  int n, m;
  fin>>n>>m;

  build(1, 1, n);

  for (int i=0; i<m; ++i) {
    int op, a, b;
    fin>>op>>a>>b;
    if (op==0) update(1, 1, n, a, b);
    else fout<<query(1, 1, n, a, b)<<endl;
  }
}