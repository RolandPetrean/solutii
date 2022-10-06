// https://www.pbinfo.ro/probleme/503/alternanta
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
  for (ll i=0; i<n-1; ++i) {
    if (e[i] != 0 && e[i+1] != 0) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}