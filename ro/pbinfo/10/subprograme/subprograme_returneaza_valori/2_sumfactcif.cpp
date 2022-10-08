// https://www.pbinfo.ro/probleme/898/sumfactcif
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long sumfactcif(long long n) {
  if (n/10 != 0) return sumfactcif(n%10)+sumfactcif(n/10);
  return n == 0 ? 1 : n*sumfactcif(n-1);
}
