// https://www.pbinfo.ro/probleme/91/masini
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("masini.in");
ofstream fout("masini.out");

int main() {
  ll n, T;
  fin>>n>>T;

  vector<ll> m(n);
  for (ll i=0; i<n; ++i) fin>>m[i];
  sort(m.begin(), m.end());

  ll s=0;
  for (ll i=0; i<n; ++i) {
    if (T-m[i] < 0) break;
    ++s;
    T -= m[i];
  }
  fout<<s;
}