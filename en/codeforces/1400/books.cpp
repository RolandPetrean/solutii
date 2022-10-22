// https://codeforces.com/problemset/problem/279/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, t;
  cin>>n>>t;
 
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin>>a[i];
 
  int l=0, s=a[0], maxi=(s<=t ? 1 : 0);
  for (int i=1; i<n; ++i) {
    if (s+a[i]>t) {
      while (s+a[i]>t && l<i) s -= a[l++];
    }
    s += a[i];
    if (s>t) continue;
 
    maxi = max(maxi, i-l+1);
  }
 
  cout<<maxi;
}