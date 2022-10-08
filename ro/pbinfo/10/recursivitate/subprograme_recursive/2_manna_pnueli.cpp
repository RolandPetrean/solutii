// https://www.pbinfo.ro/probleme/828/manna-pnueli
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long mp(long long n) {
  return n>=12 ? n-1 : mp(mp(n+2));
}