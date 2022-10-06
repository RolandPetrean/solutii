// https://www.pbinfo.ro/probleme/123/permutari
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("permutari.in");
ofstream fout("permutari.out");

int main() {
  ll n;
  fin>>n;

  vector<ll> perm;
  for (ll i=0; i<n; ++i) perm.push_back(i);

  do {
    for (ll i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}