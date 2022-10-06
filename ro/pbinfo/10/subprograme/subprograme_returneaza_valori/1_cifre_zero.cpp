// https://www.pbinfo.ro/probleme/27/cifre-zero
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll nr_cif_zero(ll n) {
  if (n == 0) return 1;
  ll z=0;
  while (n>0) {
    z += (n%10 == 0);
    n /= 10;
  }
  return z;
}