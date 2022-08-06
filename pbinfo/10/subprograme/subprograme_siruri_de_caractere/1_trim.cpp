// https://www.pbinfo.ro/probleme/2666/trim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

void Trim(string& s) {
  s.erase(0, s.find_first_not_of(' '));
  s.erase(s.find_last_not_of(' ')+1, s.size());
}