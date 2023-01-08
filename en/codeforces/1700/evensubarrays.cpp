// https://codeforces.com/contest/1731/problem/C
// tle in contest :(
#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define int long long
 
int mp[1000000];

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<int> a(n+2);
    for (int i=1; i<=n; ++i) {
      cin>>a[i];
      a[i] ^= a[i-1];
      for (int j=0; j<=512; ++j) mp[(j*j)^a[i]] = 0;
    }
 
    int s=0;
    for (int i=1; i<=n; ++i) {
      for (int j=0; j<=512; ++j) {
        int x=j*j;
        s += mp[x^a[i]]+(a[i]==x);
      }
      ++mp[a[i]];
    }
    
    cout<<n*(n+1)/2-s<<endl;
  }
}