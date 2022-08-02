// https://www.pbinfo.ro/probleme/119/2maxim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> nr(n);
  for (ll i=0; i<n; ++i) cin>>nr[i];
  sort(nr.begin(), nr.end(), greater<ll>());
  cout<<nr[0]<<" "<<nr[1];
}