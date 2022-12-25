// https://www.pbinfo.ro/probleme/3085/fsecv
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("fsecv.in");
ofstream fout("fsecv.out");

const int BSZ=320;
const int MAXV=200002;

struct Query {
  int l, r, k, idx;
};

bool cmp(Query x, Query y) {
  if (x.l/BSZ != y.l/BSZ) return x.l/BSZ < y.l/BSZ;
  return x.r < y.r;
}

int main() {
  int n, q;
  fin>>n>>q;

  vector<int> a(n);
  for (int i=0; i<n; ++i) {
    fin>>a[i];
    a[i] += MAXV/2;
  }

  vector<Query> qs(q);
  for (int i=0; i<q; ++i) {
    fin>>qs[i].l>>qs[i].r>>qs[i].k;
    --qs[i].l; --qs[i].r;
    qs[i].idx = i;
  }
  sort(qs.begin(), qs.end(), cmp);

  vector<int> ans(q);
  array<int,MAXV> f{}, apf{};
  auto modif = [&](int x, int v){
    --apf[f[a[x]]];
    f[a[x]] += v;
    ++apf[f[a[x]]];
  };
  auto add = [&](int x) {modif(x, 1);};
  auto rem = [&](int x) {modif(x, -1);};

  int st=1, dr=0;
  for (int i=0; i<q; ++i) {
    int l=qs[i].l, r=qs[i].r, k=qs[i].k;

    while (st>l) add(--st);
    while (dr<r) add(++dr);
    while (st<l) rem(st++);
    while (dr>r) rem(dr--);

    ans[qs[i].idx] = apf[k];
  }

  for (int i=0; i<q; ++i) fout<<ans[i]<<endl;
}