// https://www.pbinfo.ro/probleme/92/proiecte
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("proiecte.in");
ofstream fout("proiecte.out");

int main() {
  ll n;
  fin>>n;

  vector<pair<ll,ll>> p;
  for (ll i=0; i<n; ++i) {
    ll x;
    fin>>x;
    p.push_back({x, i+1});
  }
  sort(p.begin(), p.end());

  for (auto v : p) fout<<v.second<<" ";
}