// https://www.pbinfo.ro/probleme/351/piramida
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

  for (ll i=1; i<=n; ++i) {
    for (ll j=1; j<=i; ++j) {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}