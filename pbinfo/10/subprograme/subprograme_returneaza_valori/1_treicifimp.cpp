// https://www.pbinfo.ro/probleme/2859/treicifimp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

bool TreiCifImp(ll n) {
  ll i=0;
  while (n>0) {
    if ((n%10)&1) {
      ++i;
      if (i >= 3) return true;
    }
    else i=0;
    n /= 10;
  }
  return false;
}