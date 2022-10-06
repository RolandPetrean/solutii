// https://www.pbinfo.ro/probleme/44/primeinterval
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool prim(ll n) {
  if (n < 2) return false;
  for (ll i=2; i*i<=n; i++) {
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;

  ll s=0;
  for (ll i=min(a,b); i<=max(a,b); i++) {
    if (prim(i)) ++s;
  }
  cout<<s;
}