// https://cses.fi/problemset/task/1643
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

  // Greedy
  ll curr=0, best=LONG_MIN;
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    curr = max(curr + x, x); // Can continue subarray or start new one
    best = max(best, curr);
  }

  cout<<best;
}