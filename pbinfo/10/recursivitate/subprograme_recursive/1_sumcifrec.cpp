// https://www.pbinfo.ro/probleme/823/sumcifrec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll sumcif(ll n) {
  return n == 0 ? 0 : n%10+sumcif(n/10);
}