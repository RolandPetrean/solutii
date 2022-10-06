// https://www.pbinfo.ro/probleme/162/permcirc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> c(2*n);
  for (ll i=0; i<n; ++i) {
    cin>>c[i];
    c[n+i] = c[i];
  }
  for (ll i=0; i<n; ++i) {
    for (ll j=i; j<n+i; ++j) {
      cout<<c[j]<<" ";
    }
    cout<<endl;
  }
}