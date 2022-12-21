// https://codeforces.com/contest/1772/problem/D
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
    
    int mini=0, maxi=INT_MAX;
    for (int i=1; i<n; ++i) {
      if (a[i-1]>a[i]) mini = max(mini, (a[i]+a[i-1]+1)/2);
      else if (a[i-1]<a[i]) maxi = min(maxi, (a[i-1]+a[i])/2);
    }

    cout<<(mini<=maxi?mini:-1)<<endl;
  }
}