// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, x;
  cin>>n>>x;

  ll p=0, t=0;
  map<ll,ll> s;
  s[0] = 1;
  for (ll i=0; i<n; ++i) {
    ll a;
    cin>>a;
    p += a;

    t += s[p-x];
    ++s[p];
  }
  cout<<t;
}