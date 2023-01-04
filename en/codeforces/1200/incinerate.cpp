// https://codeforces.com/contest/1763/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, k;
    cin>>n>>k;

    vector<pair<int,int>> m(n);
    for (int i=0; i<n; ++i) cin>>m[i].first;
    for (int i=0; i<n; ++i) cin>>m[i].second;
    sort(m.begin(), m.end());

    vector<int> minp(n);
    minp[n-1] = m[n-1].second;
    for (int i=n-2; i>=0; --i) minp[i] = min(m[i].second, minp[i+1]);

    int dmg=0, i=0;
    while (k>0 && i<n) {
      dmg += k;
      while (i<n && m[i].first <= dmg) ++i;
      if (i<n) k -= minp[i];
    }
    cout<<(i==n?"YES":"NO")<<endl;
  }
}