// https://www.pbinfo.ro/probleme/208/genmat3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;
  
  ll k=1;
  for (ll i=1; i<=n; ++i) {
    for (ll j=1; j<=m; ++j) {
      cout<<k*k<<" ";
      k += 2;
    }
    cout<<endl;
  }
}