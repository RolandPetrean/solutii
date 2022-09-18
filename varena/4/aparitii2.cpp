// https://www.varena.ro/problema/aparitii2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("aparitii2.in");
ofstream fout("aparitii2.out");

int main() {
  string p, s;
  fin>>p>>s;

  int t=0;
  for (int i=0; i<=s.size()-p.size(); ++i) {
    bool ok=true;
    for (int j=0; j<p.size(); ++j) {
      if (s[i+j] != p[j]) {
        ok=false;
        break;
      }
    }
    if (ok) ++t;
  }
  fout<<t;
}