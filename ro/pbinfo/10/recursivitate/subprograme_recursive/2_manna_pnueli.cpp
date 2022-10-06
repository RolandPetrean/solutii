// https://www.pbinfo.ro/probleme/828/manna-pnueli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll mp(ll n) {
  return n>=12 ? n-1 : mp(mp(n+2));
}