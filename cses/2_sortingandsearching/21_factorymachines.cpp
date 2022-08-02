// https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, t;
  cin>>n>>t;

  vector<ll> k(n);
  for (ll i=0; i<n; ++i) cin>>k[i];
  
  ll l=0, h=LONG_LONG_MAX, res=0;
  while (l <= h) {
    ll m=(l+h)/2, s=0;

    for (ll i=0; i<n && s<t; ++i) s += m/k[i];
    if (s >= t) {
      res = m;
      h = m-1;
    } else l = m+1;
  }
  cout<<res;
}