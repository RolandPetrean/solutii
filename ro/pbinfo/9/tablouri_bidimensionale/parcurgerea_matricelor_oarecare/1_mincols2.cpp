// https://www.pbinfo.ro/probleme/316/mincols2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;

  ll mini=LONG_LONG_MAX;
  vector<vector<ll>> x(n, vector<ll>(m));
  for (ll i=0; i<n; ++i) {
    for (ll j=0; j<m; ++j) {
      cin>>x[i][j];
      mini = min(mini, x[i][j]);
    }
  }

  for (ll j=0; j<m; ++j) {
    bool c=false;
    for (ll i=0; i<n; ++i) {
      if (x[i][j] == mini) c = true;
    }
    if (c) {
      for (ll i=0; i<n; ++i) x[i][j] = mini;
    }
  }

  for (auto i : x) {
    for (auto j : i) cout<<j<<" ";
    cout<<endl;
  }
}