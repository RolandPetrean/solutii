// https://codeforces.com/contest/1771/problem/B
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

    vector<int> f(n+2);
    for (int i=0; i<m; ++i) {
      int x, y;
      cin>>x>>y;
      if (y>x) swap(x, y);
      if (y>f[x]) f[x] = y;
    }

    int cnt=0, l=1, r=1;
    for (; r<=n; ++r) {
      if (f[r]) l = max(l, f[r]+1);
      cnt += r-l+1;
    }
    cout<<cnt<<endl;
  }
}