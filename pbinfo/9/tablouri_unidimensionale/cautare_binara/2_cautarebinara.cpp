// https://www.pbinfo.ro/probleme/508/cautare-binara
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n;
  set<ll> x;
  for (ll i=0; i<n; ++i) {
    ll v;
    cin>>v;
    x.emplace(v);
  }
  cin>>m;
  
  for (ll i=0; i<m; ++i) {
    ll v;
    cin>>v;

    bool f=x.find(v) != x.end();
    cout<<f<<" ";
  }
}