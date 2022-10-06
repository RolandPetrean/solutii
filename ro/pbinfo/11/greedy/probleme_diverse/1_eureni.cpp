// https://www.pbinfo.ro/probleme/1004/eureni
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("eureni.in");
ofstream fout("eureni.out");

int main() {
  ll s, n, e;
  fin>>s>>n>>e;

  vector<ll> b(n+1);
  b[0] = 1;
  for (ll i=1; i<=n; ++i) b[i] = pow(e, i);

  ll t=0;
  for (ll i=n; i>=0; --i) {
    ll p=0;
    while (s >= b[i]) {
      s -= b[i];
      ++p;
    }
    t += p;
    if (p>0) fout<<b[i]<<" "<<p<<endl;
  }
  fout<<t;
}