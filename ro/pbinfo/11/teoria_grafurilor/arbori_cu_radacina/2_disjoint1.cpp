// https://www.pbinfo.ro/probleme/3339/disjoint1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N=32001;
int uf[N], sz[N];
void uf_init() {
  for (int i=0; i<N; ++i) {
    uf[i] = i;
    sz[i] = 1;
  }
}

int uf_find(int x) {
  if (x != uf[x]) uf[x] = uf_find(uf[x]);
  return uf[x];
}
void uf_union(int a, int b) {
  a = uf_find(a);
  b = uf_find(b);
  if (a != b) {
    if (sz[a]>sz[b]) swap(a, b);
    uf[b] = a;
    sz[a] += sz[b];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  uf_init();
  for (int i=0; i<m; ++i) {
    int op;
    cin>>op;

    if (op==1) {
      int x, y;
      cin>>x>>y;
      uf_union(x, y);
    } else if (op==2) {
      int x, y;
      cin>>x>>y;
      x = uf_find(x);
      y = uf_find(y);
      if (x==y) cout<<"DA\n";
      else cout<<"NU\n";
    } else {
      array<int,N> freq{};
      int maxi=-1;
      for (int i=1; i<=n; ++i) {
        int x=uf_find(i);
        maxi = max(maxi, ++freq[x]);
      }
      cout<<maxi<<endl;
    }
  }
}