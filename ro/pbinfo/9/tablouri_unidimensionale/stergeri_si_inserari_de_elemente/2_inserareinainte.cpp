// https://www.pbinfo.ro/probleme/160/inserareinainte
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> nr;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;

    ll sq = sqrt(x);
    if (sq*sq == x) nr.push_back(sq);
    nr.push_back(x);
  }
  for (auto x : nr) cout<<x<<" ";
}