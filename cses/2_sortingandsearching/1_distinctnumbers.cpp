// https://cses.fi/problemset/task/1621
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

  set<ll> xs; // A set can only contain unique elements
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    xs.emplace(x);
  }

  cout<<xs.size();
}