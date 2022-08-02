// https://cses.fi/problemset/task/1163
// https://usaco.guide/problems/cses-1163-traffic-lights/solution
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll x, n;
  cin>>x>>n;

  multiset<ll> ps{0, x}, g{x}; // ps stores light locations, gs stores the gaps
  for (ll i=0; i<n; i++) {
    ll p;
    cin>>p;
    
    auto r = ps.upper_bound(p); // Find upper bound of the gap the light is placed in
    auto l = r;
    --l; // Lower bound

    // Erase the large gap and add the two new split gaps
    g.erase(g.find(*r-*l));
    g.emplace(p-*l);
    g.emplace(*r-p);
    ps.emplace(p); // Add the new light

    // Sets are sorted, the last element is the biggest
    auto m = g.end();
    --m;
    cout<<*m<<" ";
  }
}