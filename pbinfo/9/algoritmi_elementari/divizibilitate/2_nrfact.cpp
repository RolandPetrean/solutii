// https://www.pbinfo.ro/probleme/111/nrfact
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  pair<ll,ll> maxi={0,0};
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;

    ll ox=x, d=2, f=0;
    while (x>1) {
      bool ok=false;
      while (x%d==0) {
        ok = true;
        x /= d;
      }
      if (ok) ++f; 
      ++d;
      if (d*d > x) d = x;
    }
    if (f > maxi.first || (f == maxi.first && ox < maxi.second)) maxi = {f, ox};
  }
  cout<<maxi.second;
}