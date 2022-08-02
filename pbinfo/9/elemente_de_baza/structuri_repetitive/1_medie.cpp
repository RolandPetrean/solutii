// https://www.pbinfo.ro/probleme/115/medie
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0, p=0;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    if (x%2==0) {
      s += x;
      ++p;
    }
  }
  cout<<(float) s/p;
}