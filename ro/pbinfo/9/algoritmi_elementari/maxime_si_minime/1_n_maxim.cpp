// https://www.pbinfo.ro/probleme/354/n-maxim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll maxi=LONG_LONG_MIN;
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    maxi = max(maxi, x);
  }
  cout<<maxi;
}