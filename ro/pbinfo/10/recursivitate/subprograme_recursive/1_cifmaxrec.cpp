// https://www.pbinfo.ro/probleme/824/cifmaxrec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long cifmax(long long n) {
  return n==0 ? 0 : max(n%10, cifmax(n/10));
}