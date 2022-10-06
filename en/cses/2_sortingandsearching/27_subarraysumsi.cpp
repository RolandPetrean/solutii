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

  ll l=0, s=0, t=0;
  vector<ll> a(n);
  for (ll i=0; i<n; ++i) {
    cin>>a[i];
    s += a[i];

    for (; s>x; ++l) s -= a[l];
    if (s == x) ++t;
  }
  cout<<t;
}