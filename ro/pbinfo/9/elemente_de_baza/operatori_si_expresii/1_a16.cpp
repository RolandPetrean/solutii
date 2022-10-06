// https://www.pbinfo.ro/probleme/2599/a16
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll powll(ll n, ll m) {
  ll r=1;
  for (ll i=0; i<m; ++i) r *= n;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a;
  cin>>a;
  cout<<powll(a, 16);
}