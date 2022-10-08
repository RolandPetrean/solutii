// https://www.pbinfo.ro/probleme/25/celmaimarenr
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

long long cmmnr(long long n) {
  string s=to_string(n);
  sort(s.begin(), s.end(), greater<char>());
  return stoi(s);
}