// https://www.pbinfo.ro/probleme/125/permutari2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

int main() {
  ll n;
  fin>>n;

  vector<ll> perm(n);
  for (ll i=0; i<n; ++i) fin>>perm[i];
  sort(perm.begin(), perm.end());

  do {
    for (ll i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}