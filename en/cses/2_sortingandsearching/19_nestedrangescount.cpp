// https://cses.fi/problemset/task/2169
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update> oset;

bool cmp(pair<ll,pair<ll,ll>> a, pair<ll,pair<ll,ll>> b) {
  return (a.second.first < b.second.first || (a.second.first == b.second.first && a.second.second > b.second.second));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> contains(n);
  vector<ll> contained(n);
  vector<pair<ll,pair<ll,ll>>> r;
  for (ll i=0; i<n; ++i) {
    ll x, y;
    cin>>x>>y;
    r.push_back({i, {x, y}});
  }
  sort(r.begin(), r.end(), cmp);

  oset csrb;
  for (ll i=n-1; i>=0; --i) {
    ll rb=r[i].second.second;
    pair<ll,ll> p{rb, -i};
    csrb.insert(p);
    contains[r[i].first] = csrb.order_of_key(p);
  }

  oset cnrb;
  for (ll i=0; i<n; ++i) {
    ll rb=r[i].second.second;
    pair<ll,ll> p{rb, -i};
    cnrb.insert(p);
    contained[r[i].first] = cnrb.size()-cnrb.order_of_key(p)-1;
  }

  for (auto v : contains) cout<<v<<" ";
  cout<<endl;
  for (auto v : contained) cout<<v<<" ";
}