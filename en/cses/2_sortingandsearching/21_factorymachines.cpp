// https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, t;
  cin>>n>>t;

  vector<int> k(n);
  for (int i=0; i<n; ++i) cin>>k[i];
  
  int l=0, h=LONG_LONG_MAX, res=0;
  while (l <= h) {
    int m=(l+h)/2, s=0;

    for (int i=0; i<n && s<t; ++i) s += m/k[i];
    if (s >= t) {
      res = m;
      h = m-1;
    } else l = m+1;
  }
  cout<<res;
}