// https://www.pbinfo.ro/probleme/898/sumfactcif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll sumfactcif(ll n) {
  if (n/10 != 0) return sumfactcif(n%10)+sumfactcif(n/10);
  return n == 0 ? 1 : n*sumfactcif(n-1);
}
