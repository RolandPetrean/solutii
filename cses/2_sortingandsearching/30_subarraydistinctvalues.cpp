// https://cses.fi/problemset/task/2428
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, k;
  cin>>n>>k;

  ll l=0, d=0, t=0;;
  map<ll,ll> m;
  vector<ll> x(n);
  for (ll i=0; i<n; ++i) {
    cin>>x[i];

    if (m[x[i]]++ == 0) ++d;
    for (; d>k; ++l) {
      --m[x[l]];
      if (m[x[l]] == 0) --d; 
    }
    t += i-l+1;
  }
  cout<<t;
}