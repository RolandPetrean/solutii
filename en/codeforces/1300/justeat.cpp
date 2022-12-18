// https://codeforces.com/contest/1285/problem/B
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
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    bool bad=false;
    int s=0;
    for (int i=0; i<n-1 && !bad; ++i) {
      s += a[i];
      if (s<=0) bad = true;
    }
    s = 0;
    for (int i=n-1; i>0 && !bad; --i) {
      s += a[i];
      if (s<=0) bad = true;
    }

    cout<<(bad?"NO":"YES")<<endl;
  }
}