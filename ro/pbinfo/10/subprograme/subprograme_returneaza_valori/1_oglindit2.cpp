// https://www.pbinfo.ro/probleme/24/oglindit2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long oglindit(long long n) {
  string s=to_string(n);
  reverse(s.begin(), s.end());
  return stoi(s);
}