// https://codeforces.com/contest/1731/problem/A
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

    int p=1;
    for (int i=0; i<n; ++i) {
      int a;
      cin>>a;
      p *= a;
    }

    cout<<2022*(p+n-1)<<endl;
  }
}