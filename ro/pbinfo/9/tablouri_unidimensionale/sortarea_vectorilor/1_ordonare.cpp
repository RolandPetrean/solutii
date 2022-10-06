// https://www.pbinfo.ro/probleme/509/ordonare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  vector<ll> x(n);
  for (ll i=0; i<n; i++) cin>>x[i];
  sort(x.begin(), x.end());
  for (ll i=0; i<n; i++) cout<<x[i]<<" ";
}