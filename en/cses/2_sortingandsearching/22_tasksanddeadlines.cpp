// https://cses.fi/problemset/task/1630
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

  vector<pair<ll,ll>> t;
  for (ll i=0; i<n; ++i) {
    ll a, d;
    cin>>a>>d;
    t.push_back({a, d});
  }
  sort(t.begin(), t.end());

  ll r=0, e=0;
  for (ll i=0; i<n; ++i) {
    e += t[i].first;
    r += t[i].second - e;
  }
  cout<<r;
}