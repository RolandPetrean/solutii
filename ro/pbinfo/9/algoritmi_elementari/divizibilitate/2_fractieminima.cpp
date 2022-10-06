// https://www.pbinfo.ro/probleme/112/fractieminima
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll nm=LONG_LONG_MAX, nr=LONG_LONG_MIN;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    nm = min(nm, x);
    nr = max(nr, x);
  }

  ll d;
  do {
    d = __gcd(nm, nr);
    nm /= d;
    nr /= d;
  } while (d > 1);

  cout<<nm<<"/"<<nr;
}