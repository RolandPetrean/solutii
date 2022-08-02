// https://www.pbinfo.ro/probleme/1565/nzero
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll powll(ll a, ll b) {
  ll r=1;
  for (ll i=0; i<b; ++i) r *= a;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, a;
  cin>>n>>a;
  cout<<n*powll(10, a);
}