// https://codeforces.com/problemset/problem/545/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  if (n==1) {
    cout<<1;
    return 0;
  }

  vector<pair<int,int>> t(n);
  for (int i=0; i<n; ++i) cin>>t[i].first>>t[i].second;

  // 1 if tree falls to the right, 0 otherwise
  vector<bool> f(n);
  int ans=2;
  for (int i=1; i<n-1; ++i) {
    if (f[i-1] && t[i].first-t[i].second>t[i-1].second+t[i-1].first) ++ans;
    else if (!f[i-1] && t[i].first-t[i].second>t[i-1].first) ++ans;
    else if (t[i].first+t[i].second<t[i+1].first) {
      ++ans;
      f[i] = true;
    }
  }

  cout<<ans;
}