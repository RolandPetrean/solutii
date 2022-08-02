// https://www.pbinfo.ro/probleme/486/minmax0
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

  ll mini=LONG_LONG_MAX, maxi=LONG_LONG_MIN;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    mini = min(mini, x);
    maxi = max(maxi, x);
  }
  cout<<mini<<" "<<maxi;
}