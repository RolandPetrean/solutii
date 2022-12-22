// https://www.codechef.com/problems/REMONE
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

    vector<int> a(n), b(n-1);
    set<int> aset{};
    for (int i=0; i<n; ++i) {
      cin>>a[i];
      aset.insert(a[i]);
    }
    for (int i=0; i<n-1; ++i) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int mini=INT_MAX;
    for (int i=0; i<=1; ++i) {
      int x=b[0]-a[i];
      bool ok=true;
      for (int j=0; j<n-1 && ok; ++j) {
        if (aset.find(b[j]-x) == aset.end()) ok = false;
      }
      if (ok && x>0) mini = min(mini, x);
    }

    cout<<mini<<endl;
  }
}