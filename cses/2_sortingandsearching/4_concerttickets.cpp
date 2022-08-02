// https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m, x;
  cin>>n>>m;

  multiset<ll> prices;
  for (ll i=0; i<n; i++) {
    cin>>x;
    prices.emplace(x);
  }

  for (ll i=0; i<m; i++) {
    cin>>x;

    auto it = prices.upper_bound(x); // Find the smallest unaffordable ticket
    if (it == prices.begin()) cout<<-1<<endl;
    else {
      cout<<*(--it)<<endl; // *(--it) would be the highest affordable ticket
      prices.erase(it);
    }
  }
}