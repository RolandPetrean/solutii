// https://www.pbinfo.ro/probleme/2222/p10-10
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, k;
  cin>>n>>k;
  
  ll z=0;
  while (n!=1) {
    ++z;
    n /= 10;
  }

  cout<<1;
  for (ll i=0; i<k; ++i) {
    for (ll j=0; j<z; ++j) cout<<0;
  }
}