// https://www.pbinfo.ro/probleme/896/factorialf
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll fact(ll n) {
  return n == 0 ? 1 : n*fact(n-1);
}