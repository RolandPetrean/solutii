// https://cses.fi/problemset/task/1662
// https://usaco.guide/problems/cses-1662-subarray-divisibility/solution - very useful
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

  ll p=0, t=0;
  vector<ll> m(n);
  m[0] = 1;
  for (ll i=0; i<n; ++i) {
    ll a;
    cin>>a;
    
    p += a;
    ++m[(p%n+n)%n];
  }
  for (auto v : m) t += v*(v-1)/2;
  cout<<t;
}