// https://www.varena.ro/problema/paranteze
// TLE la ultimul test, ia doar 90 de pct. habar nu am de ce
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("paranteze.in");
ofstream fout("paranteze.out");

int n;

void back(string s, int o, int c) {
  if (o == n && c == n) {
    fout<<s<<endl;
    return;
  }

  if (o < n) back(s+'(', o+1, c);
  if (c < o) back(s+')', o, c+1);
}

int main() {
  fin>>n;
  back("", 0, 0);
}