// https://www.pbinfo.ro/probleme/916/factorialrec1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

void factorial(ll n, int& f) {
  if (n <= 0) f = 1;
  else {
    factorial(n-1, f);
    f *= n;
  }
}