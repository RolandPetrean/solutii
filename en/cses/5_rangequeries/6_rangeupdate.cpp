// https://cses.fi/problemset/task/1651
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define int long long
const int MAXN=800000;
int a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) cin>>a[nod];
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
  }
}

void update(int nod, int l, int r, int ql, int qr, int val) {
  if (l >= ql && r <= qr) a[nod] += val;
  else {
    int mid=(l+r)/2;
    if (ql<=mid) update(2*nod, l, mid, ql, qr, val);
    if (mid<qr) update(2*nod+1, mid+1, r, ql, qr, val);
  }
}

int query(int nod, int l, int r, int pos) {
  if (l==r) return a[nod];

  int mid=(l+r)/2, s=a[nod];
  if (pos<=mid) s += query(2*nod, l, mid, pos);
  if (mid<pos) s += query(2*nod+1, mid+1, r, pos);
  return s;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q;
  cin>>n>>q;

  build(1, 1, n);

  for (int i=0; i<q; ++i) {
    int op;
    cin>>op;

    if (op==1) {
      int a, b, u;
      cin>>a>>b>>u;
      update(1, 1, n, a, b, u);
    } else {
      int k;
      cin>>k;
      cout<<query(1, 1, n, k)<<endl;
    }
  }
}