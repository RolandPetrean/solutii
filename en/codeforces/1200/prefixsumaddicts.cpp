// https://codeforces.com/contest/1738/problem/B
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
    int n, k;
    cin>>n>>k;

    vector<int> s(n+1), a(n+1);
    for (int i=n-k+1; i<=n; ++i) cin>>s[i];
    if (k==1) {
      cout<<"Yes\n";
      continue;
    }

    for (int i=n-k+2; i<=n; ++i) a[i] = s[i]-s[i-1];
    if (!is_sorted(a.begin()+n-k+2, a.end()) || s[n-k+1]>a[n-k+2]*(n-k+1)) cout<<"No\n";
    else cout<<"Yes\n";
  }
}