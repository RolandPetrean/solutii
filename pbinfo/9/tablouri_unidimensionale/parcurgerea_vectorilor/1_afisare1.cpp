// https://www.pbinfo.ro/probleme/489/afisare1
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

  vector<ll> e(n);
  for (ll i=0; i<n; ++i) cin>>e[i];

  for (ll i=0; i<n; ++i) {
    if (i&1) cout<<e[n-1-(i/2)];
    else cout<<e[i/2];
    cout<<" ";
  }
}