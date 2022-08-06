// https://www.pbinfo.ro/probleme/2720/bucketsort
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("bucketsort.in");
ofstream fout("bucketsort.out");

int main() {
  ll n, d;
  fin>>n;

  vector<ll> e(n);
  for (ll i=0; i<n; ++i) fin>>e[i];
  fin>>d;
  if (d == 0) sort(e.begin(), e.end());
  else sort(e.begin(), e.end(), greater<ll>());

  for (auto v : e) fout<<v<<" ";
}