// https://www.pbinfo.ro/probleme/172/difmin
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll lx, n1=0, n2=0;
  pair<ll,ll> mini{LONG_LONG_MAX, LONG_LONG_MAX};
  cin>>lx;
  for (ll i=1; i<n; ++i) {
    ll x;
    cin>>x;

    if (abs(x-lx) < mini.first || (abs(x-lx) == mini.first && x+lx < mini.second)) {
      mini = {abs(x-lx),x+lx};
      n1 = lx;
      n2 = x;
    }
    lx = x;
  }
  cout<<n1<<" "<<n2;
}