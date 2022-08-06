// https://www.pbinfo.ro/probleme/24/oglindit2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

ll oglindit(ll n) {
  string s=to_string(n);
  reverse(s.begin(), s.end());
  return stoi(s);
}