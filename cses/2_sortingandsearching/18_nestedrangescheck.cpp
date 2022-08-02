// https://cses.fi/problemset/task/2168
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

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

  ll mnrb=LONG_LONG_MAX;
  for (ll i=n-1; i>=0; --i) {
    ll rb=r[i].second.second;
    if (mnrb <= rb) contains[r[i].first] = 1;
    else mnrb = rb;
  }

  ll mxrb=0;
  for (ll i=0; i<n; ++i) {
    ll rb=r[i].second.second;
    if (mxrb >= rb) contained[r[i].first] = 1;
    else mxrb = rb;
  }

  for (auto v : contains) cout<<v<<" ";
  cout<<endl;
  for (auto v : contained) cout<<v<<" ";
}