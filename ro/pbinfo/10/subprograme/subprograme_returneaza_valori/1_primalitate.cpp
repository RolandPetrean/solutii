// https://www.pbinfo.ro/probleme/14/primalitate
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

bool prim(ll n) {
  if (n <= 1) return false;
  for (ll i=2; i*i<=n; ++i) {
    if (n%i==0) return false;
  }
  return true;
}