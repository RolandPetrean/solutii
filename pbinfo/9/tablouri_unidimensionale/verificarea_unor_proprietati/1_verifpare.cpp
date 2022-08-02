// https://www.pbinfo.ro/probleme/288/verifpare
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

  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;

    if (x&1) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}