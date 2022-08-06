// https://www.pbinfo.ro/probleme/2644/clase
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ifstream fin("clase.in");
ofstream fout("clase.out");

int main() {
  ll n, m;
  fin>>n;
  set<ll> x;
  for (ll i=0; i<n; ++i) {
    ll v;
    fin>>v;
    x.emplace(v);
  }
  fin>>m;
  
  ll s=0;
  for (ll i=0; i<m; ++i) {
    ll v;
    fin>>v;

    bool f=x.find(v) != x.end();
    s += f;
  }
  fout<<s;
}