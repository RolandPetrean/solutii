// https://codeforces.com/contest/1744/problem/B
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
    int n, q;
    cin>>n>>q;

    int s=0, e=0, o=0;
    for (int i=0; i<n; ++i) {
      int a=0;
      cin>>a;
      s += a;
      if (a&1) ++o;
      else ++e;
    }

    while (q--) {
      int t, x;
      cin>>t>>x;
      if (t==0) {
        s += x*e;
        if (x&1) {
          o += e;
          e = 0;
        }
      } else {
        s += x*o;
        if (x&1) {
          e += o;
          o = 0;
        }
      }

      cout<<s<<endl;
    }
  }
}