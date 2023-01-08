// https://codeforces.com/problemset/problem/1416/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<int> a(n+1), last(n+1), mink(n+1), kx(n+1, -1);
    for (int i=1; i<=n; ++i) {
      cin>>a[i];
      mink[a[i]] = max(mink[a[i]], i-last[a[i]]);
      last[a[i]] = i;
    }
    for (int i=1; i<=n; ++i) mink[i] = max(mink[i], n-last[i]+1);

    for (int i=1; i<=n; ++i) {
      if (!mink[i]) continue;
      for (int j=mink[i]; j<=n; ++j) {
        if (kx[j] != -1 && kx[j]<i) break;
        kx[j] = i;
      }
    }

    for (int i=1; i<=n; ++i) cout<<kx[i]<<" ";
    cout<<endl;
  }
}
