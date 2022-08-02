// https://www.pbinfo.ro/probleme/1030/sumeproduse
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

  ll s=0, s2=0;
  for (ll i=0; i<n/2; ++i) s += e[i];
  for (ll i=n/2; i<n; ++i) s2 += e[i];
  cout<<s*s2;
}