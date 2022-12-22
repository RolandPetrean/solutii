// https://codeforces.com/contest/1744/problem/E1
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
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int p=a*b;
    int x=INT_MIN, y=INT_MIN;
    for (int i=a+1; i<=c; ++i) {
      int m=p/__gcd(p, i), mp=d/m*m;
      if (mp>b) {
        x = i; y = mp;
      }
    }

    if (x==INT_MIN) cout<<"-1 -1\n";
    else cout<<x<<" "<<y<<endl;
  }
}