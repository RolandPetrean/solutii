// https://www.pbinfo.ro/probleme/766/nrpare
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

  ll maxi=-1;
  vector<ll> lm;
  for (ll i=1; i<=n; ++i) {
    ll s=0;
    for (ll j=0; j<m; ++j) {
      ll x;
      cin>>x;
      if (x%2==0) ++s;
    }
    if (s > maxi) {
      maxi = s;
      lm = {i};
    } else if (s == maxi) lm.push_back(i);
  }
  for (auto v : lm) cout<<v<<" ";
}