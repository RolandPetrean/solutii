// https://www.pbinfo.ro/probleme/658/sumalinii
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;
  for (ll i=0; i<n; i++) {
    ll x, s=0;
    for (ll i=0; i<m; i++) {
      cin>>x;
      s += x;
    }
    cout<<s<<" ";
  }
}