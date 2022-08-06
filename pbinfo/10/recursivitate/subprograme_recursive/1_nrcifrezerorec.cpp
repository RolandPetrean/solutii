// https://www.pbinfo.ro/probleme/822/nrcifrezerorec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll nr_cif_zero(ll n) {
  if (n == 0) return 1;
  return n/10 == 0 ? 0 : (n%10==0)+nr_cif_zero(n/10);
}