// https://www.pbinfo.ro/probleme/2299/media-geometrica
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

  double p=1;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    p *= x;
  }
  cout<<pow(p, 1.0/(double)n);
}