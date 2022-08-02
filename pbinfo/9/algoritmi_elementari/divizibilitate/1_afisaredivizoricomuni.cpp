// https://www.pbinfo.ro/probleme/61/afisaredivizoricomuni
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;
  ll d = __gcd(a, b);
  for (ll i=1; i<=__gcd(a, b); ++i) {
    if (d%i == 0) cout<<i<<" ";
  }
}