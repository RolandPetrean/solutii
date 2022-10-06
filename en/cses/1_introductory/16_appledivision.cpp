// http://cses.fi/problemset/task/1623
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

  ll total=0;
  vector<ll> p(n);
  for (ll i=0; i<n; i++) {
    cin>>p[i];
    total += p[i];
  }

  // Use bitmasks for generating all possible combinations
  // This is possible because n <= 20
  ll best=LONG_MAX;
  for (ll msk=0; msk<(1<<n); msk++) {
    ll sum = 0;
    for (ll i=0; i<n; i++) {
      if (msk & (1<<i)) sum += p[i];
    }
    ll diff = abs(sum - (total - sum)); // (total - sum) is the other set
    best = min(best, diff);
  }

  cout<<best;
}