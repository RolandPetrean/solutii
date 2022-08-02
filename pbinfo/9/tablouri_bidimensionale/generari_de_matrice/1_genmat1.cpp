// https://www.pbinfo.ro/probleme/206/genmat1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;
  for (ll i=1; i<=n; i++) {
    for (ll j=1; j<=m; j++) {
      cout<<min(i, j)<<" ";
    }
    cout<<endl;
  }
}