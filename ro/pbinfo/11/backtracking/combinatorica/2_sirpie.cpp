// https://www.pbinfo.ro/probleme/1327/sirpie
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("sirpie.in");
ofstream fout("sirpie.out");

int main() {
  ll n;
  fin>>n;

  vector<ll> perm(n);
  for (ll i=0; i<n; ++i) fin>>perm[i];
  sort(perm.begin(), perm.end());
  
  do {
    bool ok = true;
    for (ll i=1; i<perm.size(); ++i) {
      if (__gcd(perm[i-1], perm[i]) != 1) ok = false;
    }
    if (!ok) continue;

    for (ll i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}