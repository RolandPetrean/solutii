// https://cses.fi/problemset/task/2183
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

  vector<ll> x(n);
  for (ll i=0; i<n; i++) cin>>x[i];
  sort(x.begin(), x.end());

  // The smallest coin sum is the current sum + 1 if there is no smaller coin
  ll curr=0;
  for (auto a : x) {
    if (curr+1 < a) break; // Check current sum + 1 < than next coin
    curr += a;
  }
  cout<<curr+1;
}