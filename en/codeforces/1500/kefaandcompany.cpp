// https://codeforces.com/problemset/problem/580/B
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, d;
  cin>>n>>d;

  vector<pair<int,int>> f(n);
  for (int i=0; i<n; ++i) cin>>f[i].first>>f[i].second;
  sort(f.begin(), f.end());

  long long s=0, maxs=0;
  int l=0;
  for (int r=0; r<n; ++r) {
    if (f[r].first-d>=f[l].first) {
      while (f[r].first-d>=f[l].first) {
        s -= f[l].second;
        ++l;
      }
    }
    s += f[r].second;
    maxs = max(maxs, s);
  }

  cout<<maxs;
}