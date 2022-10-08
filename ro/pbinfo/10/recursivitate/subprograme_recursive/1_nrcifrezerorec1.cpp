// https://www.pbinfo.ro/probleme/919/nrcifrezerorec1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

void nr_cif_zero(long long n, int& z) {
  if (n == 0) z=1;
  else {
    if (n/10 == 0) z=0;
    else nr_cif_zero(n/10, z);
    z += (n%10==0);
  }
}