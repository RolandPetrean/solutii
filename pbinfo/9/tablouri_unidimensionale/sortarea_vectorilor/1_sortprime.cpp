// https://www.pbinfo.ro/probleme/510/sortprime
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool prim(ll x) {
  if (x < 2) return false;
  for (ll i=2; i*i<=x; i++) {
    if (x%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> prime;
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    if (prim(x)) prime.push_back(x);
  }
  sort(prime.begin(), prime.end());
  for (auto p : prime) cout<<p<<" ";
}