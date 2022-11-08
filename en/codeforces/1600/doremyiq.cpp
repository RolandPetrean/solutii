
// https://codeforces.com/problemset/problem/1707/A
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t;
  cin>>t;
 
  while (t--) {
    int n, q;
    cin>>n>>q;
    
    vector<int> a(n), c(n);
    for (int i=0; i<n; ++i) cin>>a[i];
 
    int Q=0;
    for (int i=n-1; i>=0; --i) {
      if (a[i]<=Q) c[i] = 1;
      else if (Q<q) {
        c[i] = 1;
        ++Q;
      }
    }
 
    for (int i=0; i<n; ++i) cout<<c[i];
    cout<<endl;
  }
}