// https://infoarena.ro/problema/arbint
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("arbint.in");
ofstream fout("arbint.out");

const int MAXN=524288; // 2^19
int n, m, a[MAXN], aint[MAXN];

void build(int node, int l, int r) {
  if (l==r) aint[node] = a[l];
  else {
    int mid=(l+r)/2;
    build(2*node, l, mid);
    build(2*node+1, mid+1, r);
    aint[node] = max(aint[2*node], aint[2*node+1]);
  }
}

void update(int node, int l, int r, int pos, int val) {
  if (l==r) aint[node] = val;
  else {
    int mid=(l+r)/2;
    if (pos<=mid) update(2*node, l, mid, pos, val);
    else update(2*node+1, mid+1, r, pos, val);
    aint[node] = max(aint[2*node], aint[2*node+1]);
  }
}

int get_max(int node, int l, int r, int ql, int qr) {
  if (l >= ql && qr >= r) return aint[node];

  int mid = (l+r)/2, maxi=-1;
  if (ql <= mid) maxi = max(maxi, get_max(2*node, l, mid, ql, qr));
  if (mid < qr) maxi = max(maxi, get_max(2*node+1, mid+1, r, ql, qr));

  return maxi;
}

int main() {
  fin>>n>>m;

  for (int i=1; i<=n; ++i) fin>>a[i];
  build(1, 1, n);

  for (int i=0; i<m; ++i) {
    int c, a, b;
    fin>>c>>a>>b;

    if (c==0) fout<<get_max(1, 1, n, a, b)<<endl;
    else update(1, 1, n, a, b);
  }
}