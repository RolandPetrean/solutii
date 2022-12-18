// https://codeforces.com/contest/1709/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  vector<int> a(n), p1(n), p2(n);
  for (int i=0; i<n; ++i) {
    cin>>a[i];
    if (i) {
      p1[i] += p1[i-1];
      if (a[i]<a[i-1]) p1[i] += a[i-1]-a[i];
    }
  }

  for (int i=n-2; i>=0; --i) {
    p2[i] += p2[i+1];
    if (a[i]<a[i+1]) p2[i] += a[i+1]-a[i];
  }

  while (m--) {
    int s, t;
    cin>>s>>t;
    --s; --t;
    if (s<=t) cout<<p1[t]-p1[s]<<endl;
    else cout<<p2[t]-p2[s]<<endl;
  }
}