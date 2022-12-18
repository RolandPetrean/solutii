// https://codeforces.com/contest/1771/problem/A
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

    int mini=INT_MAX, minc=0, maxi=0, maxc=0;
    for (int i=0; i<n; ++i) {
      int a;
      cin>>a;

      if (a<mini) {
        mini = a;
        minc = 1;
      } else if (a==mini) ++minc;

      if (a>maxi) {
        maxi = a;
        maxc = 1;
      } else if (a==maxi) ++maxc;
    }

    if (mini==maxi) cout<<n*(n-1)<<endl;
    else cout<<2*minc*maxc<<endl;
  }
}