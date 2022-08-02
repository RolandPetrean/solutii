// https://www.pbinfo.ro/probleme/500/verificareordonat
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

  ll l;
  cin>>l;
  for (ll i=1; i<n; ++i) {
    ll x;
    cin>>x;
    if (x<l) {
      cout<<"NU";
      return 0;
    }
    l = x;
  }
  cout<<"DA";
}