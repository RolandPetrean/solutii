// https://codeforces.com/contest/1748/problem/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    bool first=true;
    int s=0, ans=0;
    vector<int> a(n);
    map<int,int> freq{};
    for (int i=0; i<n; ++i) {
      cin>>a[i];

      if (a[i]==0) {
        if (first) ans += freq[0];
        else {
          int maxf=0;
          for (auto [i, f]:freq) maxf = max(maxf, f);
          ans += maxf;
        }
        freq.clear();
        first = false;
      }

      s += a[i];
      ++freq[s];
    }

    int maxf=0;
    for (auto [i, f]:freq) maxf = max(maxf, f);
    cout<<ans+(first?freq[0]:maxf)<<endl;
  }
}