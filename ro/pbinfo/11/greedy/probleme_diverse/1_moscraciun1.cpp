// https://www.pbinfo.ro/probleme/4009/moscraciun1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, s;
  cin>>n>>s;

  vector<ll> c(n);
  for (ll i=0; i<n; ++i) cin>>c[i];
  sort(c.begin(), c.end());

  ll k=0, p=0;
  for (ll i=0; i<n; ++i) {
    if (c[i] > s) {
      p = c[i]-s;
      break;
    }
    s -= c[i];
    ++k;
  }
  cout<<k<<" "<<p;
}