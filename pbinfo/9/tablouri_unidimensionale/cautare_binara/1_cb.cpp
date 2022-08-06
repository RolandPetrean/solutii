// https://www.pbinfo.ro/probleme/2276/cb
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, t;
  cin>>n>>t;

  vector<ll> a(n);
  for (ll i=0; i<n; ++i) cin>>a[i];
  sort(a.begin(), a.end());

  for (ll i=0; i<t; ++i) {
    ll x, y;
    cin>>x>>y;

    auto e = distance(lower_bound(a.begin(), a.end(), x), upper_bound(a.begin(), a.end(), y));
    if (e>0) cout<<e<<endl;
    else cout<<0<<endl;
  }
}