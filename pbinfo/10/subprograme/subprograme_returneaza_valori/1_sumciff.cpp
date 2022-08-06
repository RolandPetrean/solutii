// https://www.pbinfo.ro/probleme/897/sumciff
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll sumcif(ll n) {
  ll s=0;
  while (n>0) {
    s += n%10;
    n /= 10;
  }
  return s;
}