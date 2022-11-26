// https://cses.fi/problemset/task/1648
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define int long long

const int MAXN=1048576; // 2^20
int a[MAXN];

void build(int nod, int l, int r) {
  if (l==r) cin>>a[nod];
  else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    a[nod] = a[2*nod]+a[2*nod+1];
  }
}

void update(int nod, int l, int r, int pos, int val) {
  if (l==r) a[nod] = val;
  else {
    int mid=(l+r)/2;
    if (pos<=mid) update(2*nod, l, mid, pos, val);
    else update(2*nod+1, mid+1, r, pos, val);
    a[nod] = a[2*nod]+a[2*nod+1];
  }
}

int get_sum(int nod, int l, int r, int ql, int qr) {
  if (l >= ql && r <= qr) return a[nod];

  int mid=(l+r)/2, sum=0;
  if (ql<=mid) sum += get_sum(2*nod, l, mid, ql, qr);
  if (mid<qr) sum += get_sum(2*nod+1, mid+1, r, ql, qr);

  return sum;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q;
  cin>>n>>q;

  build(1, 1, n);

  for (int i=0; i<q; ++i) {
    int op, a, b;
    cin>>op>>a>>b;

    if (op==1) update(1, 1, n, a, b);
    else cout<<get_sum(1, 1, n, a, b)<<endl;
  }
}