// https://cses.fi/problemset/task/1647
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAXN=524288; // 2^19
int a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) cin>>a[nod];
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod] = min(a[2*nod], a[2*nod+1]);
  }
}

void update(int nod, int l, int r, int pos, int val) {
  if (l==r) a[nod] = val;
  else {
    int mid=(l+r)/2;
    if (pos<=mid) update(2*nod, l, mid, pos, val);
    else update(2*nod+1, mid+1, r, pos, val);
    a[nod] = min(a[2*nod], a[2*nod+1]);
  }
}

int query(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) return a[nod];

  int mid=(l+r)/2, mini=INT_MAX;
  if (mid>=ql) mini = min(mini, query(2*nod, l, mid, ql, qr));
  if (mid<qr) mini = min(mini, query(2*nod+1, mid+1, r, ql, qr));

  return mini;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q;
  cin>>n>>q;

  build(1, 1, n);

  for (int i=0; i<q; ++i) {
    int l, r;
    cin>>l>>r;
    cout<<query(1, 1, n, l, r)<<endl;
  }
}