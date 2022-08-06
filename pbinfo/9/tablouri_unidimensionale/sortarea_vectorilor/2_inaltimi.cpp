// https://www.pbinfo.ro/probleme/618/inaltimi
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin>>n;

  vector<pair<ll, ll>> e;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    e.push_back({x, i+1});
  }
  sort(e.begin(), e.end());

  for (auto v : e) cout<<v.second<<" ";
}