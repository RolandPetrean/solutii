// https://www.pbinfo.ro/probleme/506/existaprime
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

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

  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    if (prim(x)) {
      cout<<"DA";
      return 0;
    }
  }
  cout<<"NU";
}