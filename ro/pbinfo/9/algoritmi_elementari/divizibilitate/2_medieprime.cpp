// https://www.pbinfo.ro/probleme/116/medieprime
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool prim(ll n) {
  if (n <= 1) return false;
  for (ll i=2; i*i<=n; ++i) {
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  ll s=0, p=0;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    if (prim(x)) {
      s += x;
      ++p;
    }
  }
  cout<<fixed<<setprecision(2)<<(double)(s*100/p)*0.01; // wtf
}