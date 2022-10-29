// https://www.pbinfo.ro/probleme/1651/graf
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin>>n>>m;

  vector<int> g(n), s(n);
  for (int i=0; i<m; ++i) {
    int x, y, p;
    cin>>x>>y>>p;
    --x; --y;
    g[x] += p;
    g[y] += p;
    ++s[x]; ++s[y];
  }

  int vf=-1;
  for (int i=0; i<n; ++i) {
    if (vf==-1 || g[i]/s[i] < g[vf]/s[vf]) vf = i;
  }
  cout<<++vf;
}