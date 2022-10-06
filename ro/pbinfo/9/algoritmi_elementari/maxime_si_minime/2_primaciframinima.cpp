// https://www.pbinfo.ro/probleme/171/primaciframinima
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  pair<ll,ll> mini{10,0};
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;

    ll ox=x, c=0;
    while (x>0) {
      c = x%10;
      x /= 10;
    }
    if (c<mini.first || (c == mini.first && ox > mini.second)) mini = {c,ox};
  }
  cout<<mini.second;
}