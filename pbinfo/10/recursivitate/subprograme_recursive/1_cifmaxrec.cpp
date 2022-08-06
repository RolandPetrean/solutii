// https://www.pbinfo.ro/probleme/824/cifmaxrec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll cifmax(ll n) {
  return n==0 ? 0 : max(n%10, cifmax(n/10));
}