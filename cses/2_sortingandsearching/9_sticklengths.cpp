// http://cses.fi/problemset/task/1074
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

  vector<ll> p(n);
  for (ll i=0; i<n; i++) cin>>p[i];
  sort(p.begin(), p.end());

  // Find the median of the values and calculate cost accordingly
  ll med=p[p.size() / 2], cost=0;
  for (auto v : p) cost += abs(v - med);
  cout<<cost;
}