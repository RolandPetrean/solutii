// https://www.pbinfo.ro/probleme/2/suma-n
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  
  ll s=0;
  for (ll i=0; i<n; i++) {
    ll x;
    cin>>x;
    s += x;
  }
  cout<<s;
}