// https://www.varena.ro/problema/optim
// TODO 80p, fa cu back/dinamica
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("optim.in");
ofstream fout("optim.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<ll> x(n);
  for (int i=0; i<n; ++i) fin>>x[i];

  ll mini=LONG_LONG_MAX, maxi=LONG_LONG_MIN;
  for (int mask=0; mask<(1<<(n-1)); ++mask) {
    if (__builtin_popcount(mask) != k) continue;
    
    vector<ll> curr=x;
    for (int i=0; i<n-1; ++i) {
      if (mask&(1<<i)) {
        curr[i+1] *= curr[i];
        curr[i] = 0;
      }
    }

    ll s=0;
    for (ll v : curr) s += v;
    mini = min(mini, s);
    maxi = max(maxi, s);
  }
  fout<<mini<<" "<<maxi; 
}