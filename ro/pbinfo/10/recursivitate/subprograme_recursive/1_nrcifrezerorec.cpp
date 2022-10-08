// https://www.pbinfo.ro/probleme/822/nrcifrezerorec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long nr_cif_zero(long long n) {
  if (n == 0) return 1;
  return n/10 == 0 ? 0 : (n%10==0)+nr_cif_zero(n/10);
}