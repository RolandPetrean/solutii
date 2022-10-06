// https://www.pbinfo.ro/probleme/501/verifegale
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

  ll e;
  cin>>e;
  for (ll i=1; i<n; ++i) {
    ll x;
    cin>>x;
    if (x != e) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}