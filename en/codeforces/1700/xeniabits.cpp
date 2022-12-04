// https://codeforces.com/problemset/problem/339/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Node {
  int val;
  bool is_xor=false;
};

const int MAXN=131073; // 2^17+1
Node a[4*MAXN];

int pow2(int n) {
  int x=1;
  while (n--) x *= 2;
  return x;
}

void recalc(int node) {
  if (a[node].is_xor) a[node].val = a[2*node].val ^ a[2*node+1].val;
  else a[node].val = a[2*node].val | a[2*node+1].val;
}

void build(int node, int l, int r, bool is_xor) {
  if (l==r) cin>>a[node].val;
  else {
    int mid=(l+r)/2;
    build(2*node, l, mid, !is_xor);
    build(2*node+1, mid+1, r, !is_xor);
    a[node].is_xor = is_xor;
    recalc(node);
  }
}

void update(int node, int l, int r, int pos, int val) {
  if (l==r) a[node].val = val;
  else {
    int mid=(l+r)/2;
    if (pos<=mid) update(2*node, l, mid, pos, val);
    else update(2*node+1, mid+1, r, pos, val);
    recalc(node);
  }
}

int query() {
  return a[1].val;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;

  int sz=pow2(n);
  build(1, 1, sz, (n%2==0));

  for (int i=0; i<m; ++i) {
    int p, b;
    cin>>p>>b;
    update(1, 1, sz, p, b);
    cout<<query()<<endl;
  }
}