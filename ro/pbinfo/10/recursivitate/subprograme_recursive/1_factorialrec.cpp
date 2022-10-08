// https://www.pbinfo.ro/probleme/820/factorialrec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long factorial(long long n) {
  return n <= 0 ? 1 : n*factorial(n-1);
}