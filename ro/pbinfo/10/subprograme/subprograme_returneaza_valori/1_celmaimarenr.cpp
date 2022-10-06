// https://www.pbinfo.ro/probleme/25/celmaimarenr
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll cmmnr(ll n) {
  string s=to_string(n);
  sort(s.begin(), s.end(), greater<char>());
  return stoi(s);
}