// https://cses.fi/problemset/task/1073
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

  multiset<ll> t;
  for (ll i=0; i<n; i++) {
    ll k;
    cin>>k;
    
    auto it = t.upper_bound(k);
    if (it != t.end()) t.erase(it); // Erase old top value
    t.emplace(k); // Add new top value or tower
  }
  cout<<t.size();
}