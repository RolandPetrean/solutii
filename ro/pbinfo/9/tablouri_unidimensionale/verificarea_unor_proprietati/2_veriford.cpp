// https://www.pbinfo.ro/probleme/287/veriford
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

  for (ll i=0; i<n; ++i) {
    ll m;
    cin>>m;

    ll l, o=1;
    cin>>l;
    for (ll j=1; j<m; ++j) {
      ll x;
      cin>>x;
      if (x<l) o=0;
      l=x;
    }
    cout<<o<<" ";
  }
}