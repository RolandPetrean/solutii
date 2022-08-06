// https://www.pbinfo.ro/probleme/918/sumcifrec1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

void sumcif(ll n, int& s) {
  if (n == 0) s=0;
  else {
    sumcif(n/10, s);
    s += n%10;
  }
}