// https://codeforces.com/problemset/problem/1611/F
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, s;
    cin>>n>>s;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    int m=s, l=0, maxi=0, maxl, maxr;
    for (int r=0; r<n; ++r) {
      m += a[r];
      while (m<0 && l<=r) {
        m -= a[l];
        ++l;
      }
      if (m>=0 && r-l+1>maxi) {
        maxi = r-l+1; maxl=l+1; maxr=r+1;
      }
    }

    if (maxi==0) cout<<"-1\n";
    else cout<<maxl<<" "<<maxr<<endl;
  }
}