// https://www.pbinfo.ro/probleme/767/sumapare2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;

  ll s=0;
  for (ll i=0; i<n; ++i) {
    for (ll j=0; j<m; ++j) {
      ll x;
      cin>>x;
      if (x%2==0) s += x;
    }
  }
  cout<<s;
}