// https://www.pbinfo.ro/probleme/355/n-minim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll mini=LONG_LONG_MAX;
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    mini = min(mini, x);
  }
  cout<<mini;
}