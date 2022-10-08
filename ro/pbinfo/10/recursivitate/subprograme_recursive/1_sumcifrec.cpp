// https://www.pbinfo.ro/probleme/823/sumcifrec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long sumcif(long long n) {
  return n == 0 ? 0 : n%10+sumcif(n/10);
}