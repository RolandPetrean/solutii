// https://www.pbinfo.ro/probleme/820/factorialrec
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll factorial(ll n) {
  return n <= 0 ? 1 : n*factorial(n-1);
}