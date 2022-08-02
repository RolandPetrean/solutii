// https://www.pbinfo.ro/probleme/159/inseraredupa
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  vector<ll> nr;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    nr.push_back(x);
    if (x%2==0) nr.push_back(2*x);
  }
  for (auto x : nr) cout<<x<<" ";
}