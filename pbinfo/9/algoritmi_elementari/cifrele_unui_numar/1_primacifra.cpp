// https://www.pbinfo.ro/probleme/127/prima-cifra
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  ll s=0;
  for (ll i=0; i<n; ++i) {
    ll x, c=0;
    cin>>x;
    while (x>0) {
      c = x%10;
      x /= 10;
    }
    s += c;
  }
  cout<<s;
}