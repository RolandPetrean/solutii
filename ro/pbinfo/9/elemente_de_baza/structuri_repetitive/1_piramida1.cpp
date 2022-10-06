// https://www.pbinfo.ro/probleme/456/piramida1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  char c;
  cin>>n>>c;

  for (ll i=1; i<=n; ++i) {
    for (ll j=1; j<=i; ++j) {
      cout<<c;
    }
    cout<<endl;
  }
}