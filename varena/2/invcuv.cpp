// https://www.varena.ro/problema/invcuv
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("invcuv.in");
ofstream fout("invcuv.out");

void invs(string s, int i) {
  if (i>=s.size()) return;
  invs(s, i+1);
  fout<<s[i];
}

void invcuv(string s) {
  char c;
  if (fin>>noskipws>>c) {
    if (isspace(c)) {
      invs(s, 0);
      fout<<c;
      invcuv("");
    } else invcuv(s+c);
  } else invs(s,0);
}

int main() {
  invcuv("");
}