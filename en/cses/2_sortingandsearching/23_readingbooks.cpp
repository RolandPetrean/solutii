// https://cses.fi/problemset/task/1631
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

  ll s=0, maxt=0;
  for (ll i=0; i<n; ++i) {
    ll t;
    cin>>t;
    s += t;
    maxt = max(maxt, t);
  }

  if (s-maxt > maxt) cout<<s;
  else cout<<2*maxt;
}