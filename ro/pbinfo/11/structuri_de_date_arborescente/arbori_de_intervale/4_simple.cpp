// https://www.pbinfo.ro/probleme/3225/simple
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long
#define MAX LONG_LONG_MAX

struct Nod {
  int minp=MAX, maxp=0, mini=MAX, maxi=0, val=0;
};

const int MAXN=800010;
Nod a[MAXN];

void recalc(int nod) {
  a[nod].maxp = max(a[2*nod].maxp, a[2*nod+1].maxp);
  a[nod].maxi = max(a[2*nod].maxi, a[2*nod+1].maxi);
  a[nod].minp = min(a[2*nod].minp, a[2*nod+1].minp);
  a[nod].mini = min(a[2*nod].mini, a[2*nod+1].mini);
}

void build(int nod, int l, int r) {
  if (l==r) {
    int x;
    cin>>x;
    if (x&1) {
      a[nod].mini = x;
      a[nod].maxi = x;
    }
    else {
      a[nod].minp = x;
      a[nod].maxp = x;
    }
  } else {
    int mid=(l+r)/2;
    build(2*nod, l, mid);
    build(2*nod+1, mid+1, r);
    recalc(nod);
  }
}

void lazy(int nod, int val) {
  a[nod].val += val;
  if (val&1) {
    swap(a[nod].minp, a[nod].mini);
    swap(a[nod].maxp, a[nod].maxi);
  }
  if (a[nod].minp!=MAX) a[nod].minp += val;
  if (a[nod].mini!=MAX) a[nod].mini += val;
  if (a[nod].maxp) a[nod].maxp += val;
  if (a[nod].maxi) a[nod].maxi += val;
}

void push(int nod) {
  if (a[nod].val) {
    lazy(2*nod, a[nod].val);
    lazy(2*nod+1, a[nod].val);
    a[nod].val = 0;
  }
}

void update(int nod, int l, int r, int ql, int qr, int val) {
  if (l>=ql && r<=qr) lazy(nod, val);
  else {
    int mid=(l+r)/2;
    push(nod);
    if (ql<=mid) update(2*nod, l, mid, ql, qr, val);
    if (mid<qr) update(2*nod+1, mid+1, r, ql, qr, val);
    recalc(nod);
  }
}

pair<int,int> query(int nod, int l, int r, int ql, int qr) {
  if (l>=ql && r<=qr) return {a[nod].minp, a[nod].maxi};

  int mid=(l+r)/2, minp=MAX, maxi=0;
  push(nod);
  if (ql<=mid) {
    pair<int,int> q=query(2*nod, l, mid, ql, qr);
    minp = min(minp, q.first);
    maxi = max(maxi, q.second);
  }
  if (mid<qr) {
    pair<int,int> q=query(2*nod+1, mid+1, r, ql, qr);
    minp = min(minp, q.first);
    maxi = max(maxi, q.second);
  }
  return {minp, maxi};
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin>>n;

  build(1, 1, n);

  cin>>q;
  for (int i=0; i<q; ++i) {
    int op, a, b;
    cin>>op>>a>>b;
    if (op==0) {
      int val;
      cin>>val;
      update(1, 1, n, a, b, val);
    } else {
      pair<int,int> q=query(1, 1, n, a, b);
      cout<<(q.first!=MAX?q.first:-1)<<" "<<(q.second?q.second:-1)<<endl;
    }
  }
}