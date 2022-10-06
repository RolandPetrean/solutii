// https://www.pbinfo.ro/probleme/81/matrice
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  ll t[n+2][n+2];
  for (ll i=0; i<n+2; ++i) for (ll j=0; j<n+2; ++j) t[i][j] = -1;
  for (ll i=1; i<=n; ++i) {
    for (ll j=1; j<=n; ++j) {
      cin>>t[i][j];
    }
  }

  ll s=0;
  array<pair<ll,ll>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};
  for (ll i=1; i<=n; ++i) {
    for (ll j=1; j<=n; ++j) {
      bool k=true;
      for (auto d : dir) {
        if (t[i+d.first][j+d.second] >= t[i][j]) k = false;
      }
      if (k) {
        ++s;
      }
    }
  }
  cout<<s;
}