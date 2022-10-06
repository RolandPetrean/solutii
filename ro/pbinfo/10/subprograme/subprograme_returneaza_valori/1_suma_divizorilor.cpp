// https://www.pbinfo.ro/probleme/16/suma-divizorilor
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll sum_div(ll n) {
  ll d=0;
  for (ll i=1; i*i<=n; ++i) {
    if (n%i==0) {
      d += i;
      if (n/i != i) d += n/i;
    }
  }
  return d;
}