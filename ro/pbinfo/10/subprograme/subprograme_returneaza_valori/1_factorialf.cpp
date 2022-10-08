// https://www.pbinfo.ro/probleme/896/factorialf
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long fact(long long n) {
  return n == 0 ? 1 : n*fact(n-1);
}