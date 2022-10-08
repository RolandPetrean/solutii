// https://www.pbinfo.ro/probleme/897/sumciff
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long sumcif(long long n) {
  long long s=0;
  while (n>0) {
    s += n%10;
    n /= 10;
  }
  return s;
}