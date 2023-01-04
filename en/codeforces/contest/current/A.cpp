// https://codeforces.com/contest/1770/problem/A
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
    int n, m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for (int i=0; i<n; ++i) cin>>a[i];
    for (int i=0; i<m; ++i) cin>>b[i];
    
    // O(nm)
    for (int i=0; i<m; ++i) {
      int minj=0;
      for (int j=0; j<n; ++j) {
        if (a[j]<a[minj]) minj = j;
      }
      a[minj] = b[i]; // Always set minimum
    }

    int s=0;
    for (int i=0; i<n; ++i) s += a[i];
    cout<<s<<endl;
  }
}