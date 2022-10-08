// https://www.pbinfo.ro/probleme/27/cifre-zero
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long nr_cif_zero(long long n) {
  if (n == 0) return 1;
  long long z=0;
  while (n>0) {
    z += (n%10 == 0);
    n /= 10;
  }
  return z;
}