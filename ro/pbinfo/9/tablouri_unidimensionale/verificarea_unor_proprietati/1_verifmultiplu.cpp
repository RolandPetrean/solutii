// https://www.pbinfo.ro/probleme/292/verifmultiplu
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
  for (ll i=0; i<n; ++i) {
    if (e[i]%e[n-1]!=0) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}