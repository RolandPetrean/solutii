// https://www.pbinfo.ro/probleme/16/suma-divizorilor
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long sum_div(long long n) {
  long long d=0;
  for (int i=1; i*i<=n; ++i) {
    if (n%i==0) {
      d += i;
      if (n/i != i) d += n/i;
    }
  }
  return d;
}